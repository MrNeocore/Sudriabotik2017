/******************************************************************************/
/************** Carte principale Robot 1 : DSPIC33FJ128MC804*******************/
/******************************************************************************/
/* Fichier 	: srategie.c
 * Auteur  	: Quentin
 * Revision	: 1.0
 * Date		: 07 f�vrier 2015, 22:47
 *******************************************************************************
 *
 *
 ******************************************************************************/

/******************************************************************************/
/******************************** INCLUDES ************************************/
/******************************************************************************/

#include "system.h"

int offset_front = 150;//270;
int offset_side = 165;
int vitesse_calage = 30;
int vitesse_std = 95;
int vitesse_passe_part = 75;

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/

void strategie()
{
    COULEUR = couleur_depart();
    #ifdef GROS_ROBOT
    // axID - > role
    //  3       funny action
    //  4       ar gauche billes 
    //  5       ar droit billes 
    //  12      av gauche billes
    //  15      bielle droit
    //  22      av droit billes 
    //  23      rampe cube
    //  26      bielle gauche
    
    //while(SYS_JACK);
    
    // D�marage du match
    CPT_TEMPS_MATCH.actif = true;
    EVITEMENT_ADV.actif = OFF;
    EVITEMENT_ADV.mode = STOP;
    
    /**************************** INITIALISATION ******************************/
    
    // init_position_robot(890, 40, 90);
    mvt_cage_bille(AR, lever);
    mvt_cage_bille(AV, abaisser);
    avalement(ARRETER);
        
    /**************************** STRAT 1 *************************************/
    /* petit crat 1
    *  petit crat 2
    *  d�pose base
    *  grand crat 0 1er passage
    *  expulsion filet base */

//        /* d�gagement base */
//        avancer_reculer(100, vitesse_std);
//        rejoindre(1070, 590, MARCHE_AVANT, vitesse_std);
//
//        /* d�placement crat�re 1 */
//        rejoindre(737+offset_front, 560, MARCHE_AVANT, vitesse_std);
//
//        /* aspiration crat�re 1 & d�gagement */
//        avalement(AVALER);
//        avancer_reculer(-100, vitesse_std);
//
//        /* d�placement crat�re 2 */
//        rejoindre(650, 1350, MARCHE_AVANT, vitesse_std);
//        rejoindre(692, 1700, MARCHE_AVANT, vitesse_std);
//        orienter(18, 100);
//
//        /* aspiration crat�re 2 */
//        avancer_reculer(150, vitesse_std);
//        avalement(AVALER);
//        avancer_reculer(-150, vitesse_std);
//
//        /* d�pose base */
//        orienter(-100, vitesse_std);
//        passe_part(650, 1110, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(1150, 360, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(950, 240, MARCHE_AVANT, vitesse_std);
//
//        /* expulsion & d�gagement */
//        orienter(195, 100);
//        avalement(EXPULSER);
//        avancer_reculer(-80, vitesse_std);
//        orienter(90, 100);
//        //calageX
//
//        /* d�placement crat�re 0 */
//        passe_part(900, 1000, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(350, 1150, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(275, 1350, MARCHE_AVANT, vitesse_std);
//
//        /* aspiration 1 crat�re 0 & d�gagement */
//        orienter(105, 100);
//        avancer_reculer(50, vitesse_std/2);
//        avalement(AVALER);
//        avancer_reculer(-100, vitesse_std);
//        orienter(-60, 100);
//
//        /* d�placement base */
//        passe_part(450, 1110, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(350, 700, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(350, 500, MARCHE_ARRIERE, vitesse_std);
//
//        /* expulsion & d�gagement */
//        orienter(195, 100);
//        avalement(EXPULSER);

    /**************************** STRAT 2 *************************************/
    /* petit crat 1
    *  grand crat 0 1er passage
    *  grand crat 0 2em passage
    *  d�pose base
    *  petit crat 2
    *  d�pose base */
            
//        /* d�gagement base */
//        avancer_reculer(100, vitesse_std);
//        rejoindre(1070, 590, MARCHE_AVANT, vitesse_std);
//        
//        /* d�placement crat�re 1 */
//        rejoindre(737+offset_front, 560, MARCHE_AVANT, vitesse_std);
//        
//        /* aspiration crat�re 1 & d�gagement */
//        avalement(AVALER);
//        avancer_reculer(-100, vitesse_std);
//        orienter(90, 100);
//        
//        /* d�placement crat�re 0 */
//        passe_part(900, 1000, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(350, 1150, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(275, 1350, MARCHE_AVANT, vitesse_std);
//        
//        /* aspiration 1 crat�re 0 & d�gagement */
//        orienter(105, 100);
//        avancer_reculer(50, vitesse_std/2);
//        avalement(AVALER);
//        avancer_reculer(-100, vitesse_std);
//        orienter(40, 100);
//        
//        /* d�placement 2 crat�re 0 */
//        passe_part(600, 1580, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(692, 1700, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        
//        /* aspiration 2 crat�re 0 & d�gagement */
//        orienter(165, 100);
//        avancer_reculer(60, vitesse_std);
//        avalement(AVALER);
//        avancer_reculer(-100, vitesse_std);
//        orienter(-120, 100);
//        
//        /* d�pose base */
//        passe_part(650, 1110, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(1150, 360, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(950, 240, MARCHE_AVANT, vitesse_std);
//        
//        /* expulsion & d�gagement */
//        orienter(195, 100);
//        avalement(EXPULSER);
//        avancer_reculer(-100, vitesse_std);
//        orienter(90, 100);
//        
//        /* d�placement crat�re 1 */
//        rejoindre(650, 1350, MARCHE_AVANT, vitesse_std);
//        rejoindre(692, 1700, MARCHE_AVANT, vitesse_std);
//        orienter(18, 100);
//        
//        /* aspiration crat�re 2 */
//        avancer_reculer(150, vitesse_std);
//        avalement(AVALER);
//        avancer_reculer(-150, vitesse_std);
//        
//        /* d�pose base */
//        orienter(-100, vitesse_std);
//        passe_part(650, 1110, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
//        passe_part(1150, 360, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
//        rejoindre(950, 240, MARCHE_AVANT, vitesse_std);
//        
//        /* expulsion & d�gagement */
//        orienter(195, 100);
//        avalement(EXPULSER);
//        avancer_reculer(-80, vitesse_std);
//        orienter(90, 100);
    
           
    #endif

        
    #ifdef PETIT_ROBOT
    // axID - > role
    //  1       bras gauche
    //  2       rotation pince gauche
    //  3       bras droit
    //  4       rotation pince droit
       
    while(!SYS_JACK);
    CPT_TEMPS_MATCH.actif = true;
    EVITEMENT_ADV.actif = OFF;
    EVITEMENT_ADV.mode = EVITEMENT_NORMAL;
    

    /**************************** INITIALISATION ******************************/
    // COULEUR 0 = JAUNE; 
    init_position_robot(42, 930, 0);
    // calages
    angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
    angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module
    //sorties des bras
    angle_AX12(1, 633, 200, SANS_ATTENTE);
    angle_AX12(3, 997, 150, SANS_ATTENTE);
     
         
    /**************************** STRAT 1 *************************************/
    /* tri 1
     * tri 2
     * d�pose B1
     * mono1
     * mono2
     * d�poseB2
     * tri3
     * d�poseB1
     * monofus�e1
     * monofus�e2
     * d�poseB2
     */

    delay_ms(750);
    calage_X(42, 0, MARCHE_ARRIERE, vitesse_calage);
   
    if (COULEUR == BLEU) {
        /* d�placement & ventouse tri1 */
        pompes(POMPE_GAUCHE, ON);
        rejoindre(600, 930, MARCHE_AVANT, vitesse_std); // position tri1 : 600 - 1000
        angle_AX12(2, 335, 80, SANS_ATTENTE);   // gauche prep depose module
        
        /* d�placement & ventouse tri2 */
        pompes(POMPE_DROITE, ON);
        rejoindre(1150, 570, MARCHE_AVANT, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�poser en B1 */
        rejoindre(865, 320, MARCHE_AVANT, vitesse_std);
        orienter(-90, 100);
        avancer_reculer(80, vitesse_std);
        calage_Y(218, -90, MARCHE_AVANT, vitesse_calage);
        pompes(POMPE_GAUCHE, OFF);
        avancer_reculer(20, vitesse_std);
        pompes(POMPE_DROITE, OFF);
        
        /* d�gagement */
        avancer_reculer(-120, vitesse_std);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module
        
        /* d�placement & ventouse Mono1 */
        pompes(POMPE_GAUCHE, ON);
        rejoindre(650, 285, MARCHE_AVANT, vitesse_std); // position Mono1 : 600 - 200
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        /* d�placement & ventouse Mono2 */
        pompes(POMPE_DROITE, ON);
        rejoindre(1770, 845, MARCHE_AVANT, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�gagement */
        avancer_reculer(-150, vitesse_std);
        orienter(-120, 100);

        /* d�placement B3 */
        passe_part(1400, 500, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1200, 800, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        passe_part(1100, 1100, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        passe_part(1400 ,1250, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
        orienter(90, vitesse_std);

        /* d�poser en B3 */
        calage_Y(1430, 90, MARCHE_AVANT, vitesse_calage);
        pompes(POMPE_GAUCHE, OFF);
        pompes(POMPE_DROITE, OFF);

        /* d�gagement */
        avancer_reculer(-100, vitesse_std);
        orienter(180, 100);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module

        /* d�placement & ventouse mono fus�e 1 */
        rejoindre(300, 1200, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_DROITE, ON);
        avancer_reculer(85, vitesse_std);
        avancer_reculer(-100, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�placement & ventouse mono fus�e 2*/
        orienter(150, 100);
        pompes(POMPE_GAUCHE, ON);
        avancer_reculer(110, vitesse_std); // � r�gler
        avancer_reculer(-115, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        /* d�gagement */
        orienter(0, 100);

        /* d�placement B2 */
        rejoindre(1420, 1250, MARCHE_AVANT, vitesse_std);
        orienter(-45, 100);
        avancer_reculer(100, vitesse_std);

        /* d�pose B2 */
        pompes(POMPE_GAUCHE, OFF);
        pompes(POMPE_DROITE, OFF);

        /* d�gagement */
        avancer_reculer(-80, vitesse_std);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module

        /* d�placement & mono fus�e 3 */
        rejoindre(300, 1230, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_DROITE, ON);
        avancer_reculer(85, vitesse_std);
        avancer_reculer(-110, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�placement & ventouse mono fus�e 4*/
        orienter(155, 100);
        pompes(POMPE_GAUCHE, ON);
        avancer_reculer(160, vitesse_std); // � r�gler
        avancer_reculer(-125, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        /* d�gagement */
        orienter(0, 100);

        /* d�placement B1 */
        passe_part(900, 900, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1120, 500, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        rejoindre(1120, 320, MARCHE_AVANT, vitesse_std);
        orienter(-90, 100); // remplacer par cibler();
        avancer_reculer(60, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        calage_Y(218, -90, MARCHE_AVANT, vitesse_calage);

        /* d�pose pince gauche */
        pompes(POMPE_DROITE, OFF);
        
        /* d�gagement */
        avancer_reculer(-100, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        orienter(90, 100);
        
        /* d�placement B2 */
        passe_part(900, 650, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1100, 1200, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
        rejoindre(1400, 1400, MARCHE_AVANT, vitesse_std);
        orienter(-45, 100);
        avancer_reculer(100, vitesse_std);

        /* d�pose B2 */
        pompes(POMPE_GAUCHE, OFF);
        pompes(POMPE_DROITE, OFF);
        
    } else {
        /* d�placement & ventouse tri1 */
        pompes(POMPE_DROITE, ON);
        rejoindre(600, 930, MARCHE_AVANT, vitesse_std); // position tri1 : 600 - 1000
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�placement & ventouse tri2 */
        pompes(POMPE_GAUCHE, ON);
        rejoindre(1150, 550, MARCHE_AVANT, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);   // gauche prep depose module
        
        /* d�poser en B1 */
        rejoindre(865, 320, MARCHE_AVANT, vitesse_std);
        orienter(-90, 100);
        avancer_reculer(80, vitesse_std);
        calage_Y(218, -90, MARCHE_AVANT, vitesse_calage);
        pompes(POMPE_DROITE, OFF);
        avancer_reculer(20, vitesse_std);
        pompes(POMPE_GAUCHE, OFF);
        
        /* d�gagement */
        avancer_reculer(-120, vitesse_std);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module
        
        /* d�placement & ventouse Mono1 */
        pompes(POMPE_DROITE, ON);
        rejoindre(650, 285, MARCHE_AVANT, vitesse_std); // position Mono1 : 600 - 200
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�placement & ventouse Mono2 */
        pompes(POMPE_GAUCHE, ON);
        rejoindre(1745, 815, MARCHE_AVANT, vitesse_std); // position mono2 : 1850 - 800
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        
        /* d�gagement */
        avancer_reculer(-150, vitesse_std);
        orienter(-120, 100);

        /* d�placement B3 */
        passe_part(1400, 500, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1200, 800, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        passe_part(1100, 1100, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        passe_part(1400 ,1250, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
        orienter(90, vitesse_std);

        /* d�poser en B3 */
        calage_Y(1430, 90, MARCHE_AVANT, vitesse_calage);
        pompes(POMPE_GAUCHE, OFF);
        pompes(POMPE_DROITE, OFF);

        /* d�gagement */
        avancer_reculer(-100, vitesse_std);
        orienter(180, 100);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module

        /* d�placement & ventouse mono fus�e 1 */
        rejoindre(280, 1170, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_GAUCHE, ON);
        avancer_reculer(105, vitesse_std);
        avancer_reculer(-110, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        
        /* d�placement & ventouse mono fus�e 2*/
        rejoindre(260, 1280, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_DROITE, ON);
        orienter(180, 100);
        avancer_reculer(900, vitesse_std); // � r�gler
        avancer_reculer(-145, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�gagement */
        orienter(0, 100);

        /* d�placement B2 */
        rejoindre(1370, 1355, MARCHE_AVANT, vitesse_std);
        orienter(-45, 100);
        avancer_reculer(100, vitesse_std);

        /* d�pose B2 */
        pompes(POMPE_GAUCHE, OFF);
        pompes(POMPE_DROITE, OFF);

        /* d�gagement */
        avancer_reculer(-80, vitesse_std);
        angle_AX12(2, 25, 150, SANS_ATTENTE);   // gauche prep capture module
        angle_AX12(4, 973, 150, SANS_ATTENTE);  // droit prep capture module

        /* d�placement & mono fus�e 3 */
        rejoindre(260, 1150, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_GAUCHE, ON);
        avancer_reculer(100, vitesse_std);
        avancer_reculer(-110, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        
        /* d�placement & ventouse mono fus�e 4*/
        rejoindre(260, 1280, MARCHE_AVANT, vitesse_std);
        pompes(POMPE_DROITE, ON);
        orienter(180, 100);
        avancer_reculer(135, vitesse_std); // � r�gler
        avancer_reculer(-145, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        
        /* d�gagement */
        orienter(0, 100);

        /* d�placement B1 */
        passe_part(900, 900, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1120, 500, MARCHE_AVANT, vitesse_passe_part, MILIEU_TRAJECTOIRE);
        rejoindre(1220, 380, MARCHE_AVANT, vitesse_std);
        orienter(-90, 100); // remplacer par cibler();
        avancer_reculer(60, vitesse_std);
        angle_AX12(4, 660, 80, SANS_ATTENTE); // droite prep depose module
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        calage_Y(218, -90, MARCHE_AVANT, vitesse_calage);

        /* d�pose pince droite lul */
        pompes(POMPE_GAUCHE, OFF);
        
        /* d�gagement */
        avancer_reculer(-100, vitesse_std);
        angle_AX12(2, 335, 80, SANS_ATTENTE);  //gauche prep depose module
        orienter(90, 100);
        
        /* d�placement B2 */
        passe_part(900, 650, MARCHE_AVANT, vitesse_passe_part, DEBUT_TRAJECTOIRE);
        passe_part(1100, 1200, MARCHE_AVANT, vitesse_passe_part, FIN_TRAJECTOIRE);
        rejoindre(1500, 1340, MARCHE_AVANT, vitesse_std);
        orienter(-45, 100);
        avancer_reculer(100, vitesse_std);

        /* d�pose B2 */
        pompes(POMPE_DROITE, OFF);
        pompes(POMPE_GAUCHE, OFF);
    }
    #endif
}


void homologation()
{
    COULEUR = couleur_depart();

#ifdef GROS_ROBOT

    // Inits avant d�marage du robot :
    init_jack();

    while(!SYS_JACK);

    // D�marage du match
    CPT_TEMPS_MATCH.actif = true;
    EVITEMENT_ADV.actif = OFF;
    EVITEMENT_ADV.mode = STOP;

    init_position_robot(180., 988., 0.);
#endif

#ifdef PETIT_ROBOT

        init_position_robot (0, 0, 0);
        printf("\n\ryouhou");
        avancer_reculer(100, 100);

#endif

}

void reglage_odometrie()
{

    delay_ms(2000);
    //while(!SYS_JACK);
    COULEUR = couleur_depart();
#ifdef GROS_ROBOT
    init_jack();
#endif
    EVITEMENT_ADV.actif = OFF;
    
      init_position_robot (0., 0., 0.);
          //orienter(5, 100);




            init_position_robot (-100., 0., 0.);
            rejoindre(0, 0, MARCHE_AVANT, 100);
            trapeze(MARCHE_AVANT);
            trapeze(MARCHE_AVANT);
            trapeze(MARCHE_AVANT);
            trapeze(MARCHE_AVANT);
            trapeze(MARCHE_AVANT);

//           faire_des_tours(-32);
            while(1);
////
////            TIMER_DEBUG = ACTIVE;
//            init_position_robot(0, 0, 0);
            ////Horraire
//       rejoindre(2000, 0, MARCHE_AVANT, 50);
//       orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter(-90, 50);
//        rejoindre(2000, 0, MARCHE_AVANT, 50);
//        orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter (-90, 50);
//        rejoindre(2000, 0, MARCHE_AVANT, 50);
//        orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter (-90, 50);
//        rejoindre(2000, 0, MARCHE_AVANT, 50);
//        orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter (-90, 50);
//        rejoindre(2000, 0, MARCHE_AVANT, 50);
//        orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter (-90, 50);
//        rejoindre(2000, 0, MARCHE_AVANT, 50);
//        orienter(90, 50);
//        rejoindre(300, 0, MARCHE_AVANT, 50);
//        orienter(-90, 50);


            //// Anti horaire
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter(90, 50);
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter (90, 50);
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter (90, 50);
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter (90, 50);
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter (90, 50);
        rejoindre(2000, 0, MARCHE_AVANT, 50);
        orienter(-90, 50);
        rejoindre(300, 0, MARCHE_AVANT, 50);
        orienter(90, 50);
        rejoindre(500, 0, MARCHE_AVANT, 100);


//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(2000, 0, MARCHE_AVANT, 100);
//        rejoindre(300, 0, MARCHE_AVANT, 100);
//        rejoindre(500, 0, MARCHE_AVANT, 100);
//        TIMER_DEBUG = DESACTIVE;

        delay_ms(10000);
}

void pompes(uint8_t pompe, uint8_t onOff)
    {
        if (pompe == POMPE_DROITE)
        {
            if(onOff == ON)
                envoit_pwm(MOTEUR_X, PWM_X_VALEUR_MAX);
            else
                envoit_pwm(MOTEUR_X, 0.);
        }
        
        else if(pompe == POMPE_GAUCHE)
        {
            alimenter_moteur_Y(onOff, MARCHE_AVANT);
        }
    }
//
//void prendre_module(uint8_t zone, uint8_t nb_module, double pourcentage_vitesse)
//{
//    //rejoindre(zone.mod1.x, zone.mod1.y, MARCHE_AVANT, pourcentage_vitesse);
//    bras(BRAS_DROIT, SORTI);
//    //avancer_reculer(zone.avance, 30);
//    pompes(POMPE_DROITE, ON);
//    delay_ms(500);
//    //avancer_reculer(-(zone.avance), 30);
//    
//    
//}

void avalement(uint8_t position)
{
    switch(position)
    {
        // sort cube + actionne le moteur en ejection des balles + rentre cube
        case EXPULSER:
            angle_AX12(15, 715, 150, AVEC_ATTENTE);
            angle_AX12(26, (1024-715), 150, AVEC_ATTENTE);
            lancer_autom_AX12();
            delay_ms(750);
            envoit_pwm(MOTEUR_X, PWM_X_VALEUR_MAX/2);
            delay_ms(1500);
            angle_AX12(15, 250, 150, AVEC_ATTENTE);
            angle_AX12(26, (1024-250), 150, AVEC_ATTENTE);
            lancer_autom_AX12();
            delay_ms(750);
            break;
        // sort cube + actionne le moteur en avalement des balles + rentre cube
        case AVALER:
            angle_AX12(15, 715, 150, AVEC_ATTENTE);
            angle_AX12(26, (1024-715), 150, AVEC_ATTENTE);
            lancer_autom_AX12();
            delay_ms(750);
            SENS_MOTEUR_X = RECULER_MOTEUR_X;
            REGISTRE_MOTEUR_X = (uint16_t) PWM_X_VALEUR_MAX;
            delay_ms(750);
            angle_AX12(15, 250, 150, AVEC_ATTENTE);
            angle_AX12(26, (1024-250), 150, AVEC_ATTENTE);
            lancer_autom_AX12();
            delay_ms(750);
            break;
        // rentre cube + arrete moteur
        case ARRETER:
            angle_AX12(15, 300, 150, AVEC_ATTENTE);
            angle_AX12(26, (1024-300), 150, AVEC_ATTENTE);
            lancer_autom_AX12();
            envoit_pwm(MOTEUR_X, 0);
            break;
    }
}
//
//void mvt_cube(uint8_t action)
//{
//    switch(action)
//    {
//        case rentrer: 
//            angle_AX12(15, 90, 150, AVEC_ATTENTE);
//            angle_AX12(26, (1024-90), 150, AVEC_ATTENTE);
//            lancer_autom_AX12();
//            delay_ms(1500);
//            break;
//        case aspiration:
//            angle_AX12(15, 250, 150, AVEC_ATTENTE);
//            angle_AX12(26, (1024-250), 150, AVEC_ATTENTE);
//            lancer_autom_AX12();
//            delay_ms(1500);
//            break;
//        case sortir:
//            angle_AX12(15, 715, 150, AVEC_ATTENTE);
//            angle_AX12(26, (1024-715), 150, AVEC_ATTENTE);
//            lancer_autom_AX12();
//            delay_ms(1500);
//            break;
//    }
//}

void mvt_cage_bille(uint8_t type, uint8_t action)
{
    switch (type)
    {
        case AR:
            switch(action)
            {
                case lever:
                    angle_AX12(5, 200, 150, AVEC_ATTENTE);
                    angle_AX12(4, (1024-200), 150, AVEC_ATTENTE);
                    lancer_autom_AX12();
                    break;
                case abaisser:
                    angle_AX12(5, 512, 150, AVEC_ATTENTE);
                    angle_AX12(4, 512, 150, AVEC_ATTENTE);
                    lancer_autom_AX12();
                    break;
            }
            break;
        case AV:
            switch(action)
            {
                case lever:
                    angle_AX12(22, 200, 150, AVEC_ATTENTE);
                    angle_AX12(12, (1024-200), 150, AVEC_ATTENTE);
                    lancer_autom_AX12();
                    break;
                case abaisser:
                    angle_AX12(22, 512, 150, AVEC_ATTENTE);
                    angle_AX12(12, 400, 150, AVEC_ATTENTE); // valeur angle par d�fault : 512
                    lancer_autom_AX12();
                    break;
            }
    }
    
}
// 
//void funny_action_lancement()
// {
//    angle_AX12(3, 512, 150, SANS_ATTENTE);
// }
// 
// void funny_action_rechargement()
// {
//    angle_AX12(3, 400, 150, SANS_ATTENTE);
// }