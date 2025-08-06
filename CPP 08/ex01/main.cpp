#include "Span.hpp"

int main()
{
    {
        try
        {
            std::cout << "\nSubject's main:\n";
            Span sp = Span(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout << e.what() << "\n" ;
        }
    }

    {
        try
        {
            std::cout << "\nMultiple addNumber call main:\n";
            Span sp = Span(200);
            sp.addNumber(503);
            sp.addNumber(102);
            sp.addNumber(785);
            sp.addNumber(12);
            sp.addNumber(674);
            sp.addNumber(234);
            sp.addNumber(918);
            sp.addNumber(401);
            sp.addNumber(359);
            sp.addNumber(176);
            sp.addNumber(828);
            sp.addNumber(456);
            sp.addNumber(789);
            sp.addNumber(65);
            sp.addNumber(293);
            sp.addNumber(345);
            sp.addNumber(678);
            sp.addNumber(987);
            sp.addNumber(213);
            sp.addNumber(145);
            sp.addNumber(564);
            sp.addNumber(321);
            sp.addNumber(743);
            sp.addNumber(234);
            sp.addNumber(652);
            sp.addNumber(983);
            sp.addNumber(456);
            sp.addNumber(376);
            sp.addNumber(812);
            sp.addNumber(491);
            sp.addNumber(299);
            sp.addNumber(100);
            sp.addNumber(788);
            sp.addNumber(23);
            sp.addNumber(653);
            sp.addNumber(302);
            sp.addNumber(455);
            sp.addNumber(789);
            sp.addNumber(612);
            sp.addNumber(178);
            sp.addNumber(504);
            sp.addNumber(215);
            sp.addNumber(784);
            sp.addNumber(499);
            sp.addNumber(391);
            sp.addNumber(677);
            sp.addNumber(342);
            sp.addNumber(123);
            sp.addNumber(880);
            sp.addNumber(411);
            sp.addNumber(559);
            sp.addNumber(273);
            sp.addNumber(634);
            sp.addNumber(111);
            sp.addNumber(849);
            sp.addNumber(487);
            sp.addNumber(312);
            sp.addNumber(705);
            sp.addNumber(390);
            sp.addNumber(167);
            sp.addNumber(587);
            sp.addNumber(264);
            sp.addNumber(734);
            sp.addNumber(159);
            sp.addNumber(628);
            sp.addNumber(477);
            sp.addNumber(205);
            sp.addNumber(818);
            sp.addNumber(349);
            sp.addNumber(690);
            sp.addNumber(409);
            sp.addNumber(254);
            sp.addNumber(722);
            sp.addNumber(391);
            sp.addNumber(673);
            sp.addNumber(306);
            sp.addNumber(121);
            sp.addNumber(857);
            sp.addNumber(480);
            sp.addNumber(333);
            sp.addNumber(592);
            sp.addNumber(274);
            sp.addNumber(731);
            sp.addNumber(149);
            sp.addNumber(639);
            sp.addNumber(465);
            sp.addNumber(202);
            sp.addNumber(800);
            sp.addNumber(355);
            sp.addNumber(701);
            sp.addNumber(412);
            sp.addNumber(231);
            sp.addNumber(719);
            sp.addNumber(383);
            sp.addNumber(658);
            sp.addNumber(315);
            sp.addNumber(127);
            sp.addNumber(863);
            sp.addNumber(476);
            sp.addNumber(345);
            sp.addNumber(589);
            sp.addNumber(261);
            sp.addNumber(738);
            sp.addNumber(141);
            sp.addNumber(642);
            sp.addNumber(471);
            sp.addNumber(198);
            sp.addNumber(805);
            sp.addNumber(349);
            sp.addNumber(698);
            sp.addNumber(416);
            sp.addNumber(229);
            sp.addNumber(720);
            sp.addNumber(378);
            sp.addNumber(654);
            sp.addNumber(311);
            sp.addNumber(130);
            sp.addNumber(860);
            sp.addNumber(479);
            sp.addNumber(338);
            sp.addNumber(594);
            sp.addNumber(270);
            sp.addNumber(729);
            sp.addNumber(143);
            sp.addNumber(645);
            sp.addNumber(473);
            sp.addNumber(200);
            sp.addNumber(802);
            sp.addNumber(352);
            sp.addNumber(695);
            sp.addNumber(418);
            sp.addNumber(225);
            sp.addNumber(718);
            sp.addNumber(381);
            sp.addNumber(659);
            sp.addNumber(309);
            sp.addNumber(133);
            sp.addNumber(858);
            sp.addNumber(474);
            sp.addNumber(340);
            sp.addNumber(590);
            sp.addNumber(268);
            sp.addNumber(735);
            sp.addNumber(147);
            sp.addNumber(643);
            sp.addNumber(469);
            sp.addNumber(204);
            sp.addNumber(806);
            sp.addNumber(354);
            sp.addNumber(699);
            sp.addNumber(420);
            sp.addNumber(223);
            sp.addNumber(717);
            sp.addNumber(379);
            sp.addNumber(655);
            sp.addNumber(313);
            sp.addNumber(129);
            sp.addNumber(861);
            sp.addNumber(477);
            sp.addNumber(342);
            sp.addNumber(587);
            sp.addNumber(275);
            sp.addNumber(733);
            sp.addNumber(150);
            sp.addNumber(641);
            sp.addNumber(468);
            sp.addNumber(201);
            sp.addNumber(804);
            sp.addNumber(351);
            sp.addNumber(697);
            sp.addNumber(419);
            sp.addNumber(227);
            sp.addNumber(721);
            sp.addNumber(380);
            sp.addNumber(656);
            sp.addNumber(310);
            sp.addNumber(131);
            sp.addNumber(859);
            sp.addNumber(475);
            sp.addNumber(341);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }

    {
        try
        {
            std::cout << "\naddNumberS one call main:\n";
            Span sp(100000);

            sp.addMultiNumbers();
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    return (0);
}