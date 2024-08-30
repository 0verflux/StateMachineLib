#include "FooContext.hpp"

static void enter(FooContext* const ctx)
{
    ctx->count = 0;
}

static void update(FooContext* const ctx)
{
    if (ctx->current - ctx->elapsed >= 500)
    {
        ctx->elapsed = ctx->current;
        ctx->count++;
    }

    if (ctx->count == 5)
        ctx->transitionTo(FooContext::sCooldown);
}

HSM<FooContext>::State const FooContext::sRun(&FooContext::sOnGroup, enter, update, nullptr);