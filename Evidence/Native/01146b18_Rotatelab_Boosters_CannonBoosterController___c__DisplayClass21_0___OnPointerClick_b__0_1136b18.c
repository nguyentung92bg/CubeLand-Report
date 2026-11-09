/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c__DisplayClass21_0$$<OnPointerClick>b__0
void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass21_0___OnPointerClick_b__0 (Rotatelab_Boosters_CannonBoosterController___c__DisplayClass21_0_o* __this, Rotatelab_Boosters_CannonBoosterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c__DisplayClass21_0$$<OnPointerClick>b__0
   void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass21_0___OnPointerClick_b__0
   (Rotatelab_Boosters_CannonBoosterController___c__DisplayClass21_0_o* __this,
   Rotatelab_Boosters_CannonBoosterController_o* this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass21_0___OnPointerClick_b__0_1136b18
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(_UNK_01146c30 + 0x1146b34);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146c34 + 0x1146b48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146c38 + 0x1146b54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146c3c + 0x1146b60));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01146c40 + 0x1146b74));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  piVar5 = (int *)(iVar1 + 8);
  *piVar5 = param_2;
  thunk_FUN_00ec5080(piVar5,param_2);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  iVar3 = *(int *)(*piVar5 + 0x10);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01146c44 + 0x1146bd0));
  System_Action___ctor_2b10bac(uVar2,iVar1,**(undefined4 **)(_UNK_01146c48 + 0x1146bfc),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_CannonRig__Fire_11348ac(iVar3,uVar8,uVar6,uVar7,uVar2);
  return;
}

