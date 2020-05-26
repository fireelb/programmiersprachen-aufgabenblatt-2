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
    bk = b;
    ck = c;

    bk /= 0.0f;
    ck /= 2.0f;
    dk /= -0.5f;
    REQUIRE(bk.x == Approx(5.1f));
    REQUIRE(bk.y == Approx(-9.3f));
    REQUIRE(ck.x == Approx(1.5f));
    REQUIRE(ck.y == Approx(2.0f));
    REQUIRE(dk.x == Approx(-8.4f));
    REQUIRE(dk.y == Approx(8.4f));

}

TEST_CASE("Aufgabe 2.4", "[vec2]")
{
    Vec2 a;
    Vec2 b{ 5.1f,-9.3f };
    Vec2 c{ 3.0f, 4.0f };
    Vec2 d{ 4.2f,-4.2f };
    Vec2 test1{ a };
    Vec2 test2{ a };
    Vec2 test3{ a };

    test1 = a + b;
    test2 = c + d;
    REQUIRE(test1.x == Approx(5.1f));
    REQUIRE(test1.y == Approx(-9.3f));
    REQUIRE(test2.x == Approx(7.2f));
    REQUIRE(test2.y == Approx(-0.2f));
    test1 = a;
    test2 = a;
    
    test1 = b - c;
    test2 = d - c;
    REQUIRE(test1.x == Approx(2.1f));
    REQUIRE(test1.y == Approx(-13.3f));
    REQUIRE(test2.x == Approx(1.2f));
    REQUIRE(test2.y == Approx(-8.2f));
    test1 = a;
    test2 = a;

    test1 = b * 3.0f;
    test2 = c * -5.5f;
    REQUIRE(test1.x == Approx(15.3f));
    REQUIRE(test1.y == Approx(-27.9f));
    REQUIRE(test2.x == Approx(-16.5f));
    REQUIRE(test2.y == Approx(-22.0f));
    test1 = a;
    test2 = a;

    test1 = b / 0.0f;
    test2 = c / 2.0f;
    test3 = d / -0.5f;
    REQUIRE(test1.x == Approx(5.1f));
    REQUIRE(test1.y == Approx(-9.3f));
    REQUIRE(test2.x == Approx(1.5f));
    REQUIRE(test2.y == Approx(2.0f));
    REQUIRE(test3.x == Approx(-8.4f));
    REQUIRE(test3.y == Approx(8.4f));
    test1 = a;
    test2 = a;

    test1 = 2.5f * b;
    test2 = 0.0f * d;
    REQUIRE(test1.x == Approx(12.75f));
    REQUIRE(test1.y == Approx(-23.25f));
    REQUIRE(test2.x == Approx(0.0f));
    REQUIRE(test2.y == Approx(0.0f));

}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
