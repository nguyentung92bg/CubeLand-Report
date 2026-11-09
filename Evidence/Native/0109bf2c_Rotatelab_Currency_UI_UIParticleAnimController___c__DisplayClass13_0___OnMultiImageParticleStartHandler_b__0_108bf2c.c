/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass13_0$$<OnMultiImageParticleStartHandler>b__0
void Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__0 (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass13_0$$<OnMultiImageParticleStartHandler>b__0
   void 
   Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__0
   (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0_o* __this, const
   MethodInfo* method); */

int Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__0_108bf2c
              (int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0109af80 + 0x109ae4c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109af84 + 0x109ae60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109af88 + 0x109ae6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109af8c + 0x109ae78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109af90 + 0x109ae84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109af94 + 0x109ae90));
    *pcVar6 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109af98 + 0x109aea4));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar5;
    thunk_FUN_00ec5080((int *)(iVar2 + 8),iVar5);
    iVar5 = *(int *)(iVar5 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    if (iVar5 != 0) {
      uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar5,uVar7,**(undefined4 **)(_UNK_0109af9c + 0x109aef8));
      puVar4 = (undefined4 *)(iVar2 + 0x10);
      *puVar4 = uVar7;
      thunk_FUN_00ec5080(puVar4,uVar7);
      iVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(*puVar4,0x3f99999a,0x3d4ccccd,0);
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109afa0 + 0x109af40));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar7,iVar2,**(undefined4 **)(_UNK_0109afa4 + 0x109af5c),0);
      uVar3 = **(undefined4 **)(_UNK_0109afa8 + 0x109af74);
      cVar1 = '\0';
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar5 + 0x94);
      }
      if (iVar5 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar5 + 0x4c) = uVar7;
        thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x4c),uVar7,uVar3);
      }
      return iVar5;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

