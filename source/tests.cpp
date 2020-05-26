#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("Aufgabe 2.2", "[vec2]")
{
    Vec2 a;
    Vec2 b{ 5.1f,-9.3f };
    REQUIRE(a.x == Approx (0.0f));
    REQUIRE(a.y == Approx(0.0f));
    REQUIRE(b.x == Approx(5.1f));
    REQUIRE(b.y == Approx(-9.3f));
}

TEST_CASE("Aufgabe 2.3", "[vec2]")
{
    Vec2 a;
    Vec2 b{ 5.1f,-9.3f };
    Vec2 bk{ b };
    Vec2 c{ 3.0f, 4.0f };
    Vec2 ck{ c };
    Vec2 d{ 4.2f,-4.2f };
    Vec2 dk{ d };
    a += b;
    ck += d;
    REQUIRE(a.x == Approx(5.1f));
    REQUIRE(a.y == Approx(-9.3f));
    REQUIRE(ck.x == Approx(7.2f));
    REQUIRE(ck.y == Approx(-0.2f));
    ck = c;


    bk -= c;
    dk -= c;
    REQUIRE(bk.x == Approx(2.1f));
    REQUIRE(bk.y == Approx(-13.3f));
    REQUIRE(dk.x == Approx(1.2f));
    REQUIRE(dk.y == Approx(-8.2f));
    bk = b;
    dk = d;

    bk *= 3.0f;
    ck *= -5.5f;
    REQUIRE(bk.x == Approx(15.3f));
    REQUIRE(bk.y == Approx(-27.9f));
    REQUIRE(ck.x == Approx(-16.5f));
    REQUIRE(ck.y == Approx(-22.0f));
    ck = c;

    ck /= 2.0f;
    dk /= -0.5f;
    REQUIRE(ck.x == Approx(1.5f));
    REQUIRE(ck.y == Approx(2.0f));
    REQUIRE(dk.x == Approx(-8.4f));
    REQUIRE(dk.y == Approx(8.4f));

}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
