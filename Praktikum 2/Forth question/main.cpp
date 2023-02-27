#include "Pickaxe.hpp"
#include "Tool.hpp"
#include "ReinforcedAxe.hpp"

int main(){
    Pickaxe p;
    p.use();
    p.enchant();
    Pickaxe p1(p);
    Pickaxe *p2 = new (Pickaxe);
    *p2 = p;
    ReinforcedAxe *r(new(ReinforcedAxe));
    r->use();
    ReinforcedAxe *r1(new ReinforcedAxe(*r));
    r->enchant();
    ReinforcedAxe r2(*r+*r1);
    r2.repair();
    delete r;
    delete r1;
}