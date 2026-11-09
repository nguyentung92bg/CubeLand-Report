/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c$$<ResolveImpact>b__22_0
void Rotatelab_Boosters_CannonBoosterController___c___ResolveImpact_b__22_0 (Rotatelab_Boosters_CannonBoosterController___c_o* __this, Rotatelab_Boosters_CannonBoosterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011348ac) */
/* WARNING: Removing unreachable block (ram,0x011348b4) */
/* WARNING: Removing unreachable block (ram,0x011348b8) */
/* WARNING: Removing unreachable block (ram,0x011348d8) */
/* WARNING: Removing unreachable block (ram,0x011348e4) */
/* WARNING: Removing unreachable block (ram,0x011348e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c$$<ResolveImpact>b__22_0
   void Rotatelab_Boosters_CannonBoosterController___c___ResolveImpact_b__22_0
   (Rotatelab_Boosters_CannonBoosterController___c_o* __this,
   Rotatelab_Boosters_CannonBoosterController_o* this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController___c___ResolveImpact_b__22_0_1136940
               (undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  
  pcVar6 = (char *)(_UNK_01146a44 + 0x1146954);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146a48 + 0x1146968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146a4c + 0x1146974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146a50 + 0x1146980));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01146a54 + 0x1146994);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xac);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum___Raise_23a2cdc
            (iVar2,uVar3,**(undefined4 **)(_UNK_01146a58 + 0x11469f0));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01146a5c + 0x1146a04));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(iVar2 + 0x24);
  iVar2 = Rotatelab_Boosters_BaseBoosterController__get_Data_1131ac0(param_2);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01146b0c + 0x1146a78);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146b10 + 0x1146a8c));
    *pcVar6 = '\x01';
  }
  piVar7[0x15] = iVar2;
  thunk_FUN_00ec5080(piVar7 + 0x15,iVar2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar2 + 0x20);
  piVar7[7] = iVar8;
  if (piVar7[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34(piVar7[0xd],**(undefined4 **)(_UNK_01146b14 + 0x1146ae0),uVar3,0);
  piVar7[0x16] = piVar7[7] * *(int *)(iVar2 + 0x1c);
  pcVar6 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760));
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar6 = '\x01';
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = Rotatelab_Extensions__InsertUnique_object__14873f8
                    (uVar3,piVar7,**(undefined4 **)(_UNK_01134924 + 0x1134848));
  if (iVar8 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (1 < *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) {
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar2 + 0x10),1,**(undefined4 **)(_UNK_01134928 + 0x1134894));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar3,uVar3,0);
  }
  pcVar6 = (char *)(_UNK_01134fac + 0x1134f14);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
    *pcVar6 = '\x01';
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_01134f94;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar7,1,puVar1[1]);
  return;
}

