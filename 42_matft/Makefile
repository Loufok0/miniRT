CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = matft.a
TEST = matft_tests

SRC = \
	vec2/vec2.c \
	vec2/vec2_op1.c \
	vec2/vec2_op2.c \
	vec2/vec2_op3.c \
	\
	vec3/vec3.c \
	vec3/vec3_op1.c \
	vec3/vec3_op2.c \
	vec3/vec3_op3.c \
	\
	vec4/vec4.c \
	vec4/vec4_op1.c \
	vec4/vec4_op2.c \
	vec4/vec4_op3.c \
	\
	mat2/mat2.c \
	mat2/mat2_op1.c \
	mat2/mat2_op2.c \
	\
	mat3/mat3.c \
	mat3/mat3_op1.c \
	mat3/mat3_op2.c \
	\
	mat4/mat4.c \
	mat4/mat4_op1.c \
	mat4/mat4_op2.c \

OBJ = $(SRC:%.c=$(ODIR)/%.o)
ODIR = obj
TESTSRC = tests.c

all: $(NAME)

test: all
	$(CC) $(TESTSRC) $(NAME) -o $(TEST)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(ODIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(TEST)

re: fclean all

.PHONY: clean fclean all bonus test
