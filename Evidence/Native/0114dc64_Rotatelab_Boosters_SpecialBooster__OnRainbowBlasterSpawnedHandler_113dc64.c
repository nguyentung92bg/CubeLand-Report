/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$OnRainbowBlasterSpawnedHandler
void Rotatelab_Boosters_SpecialBooster__OnRainbowBlasterSpawnedHandler (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$OnRainbowBlasterSpawnedHandler
   void Rotatelab_Boosters_SpecialBooster__OnRainbowBlasterSpawnedHandler
   (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__OnRainbowBlasterSpawnedHandler_113dc64(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_0114dea8 + 0x114dc7c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114deac + 0x114dc90));
    *pcVar9 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  pcVar9 = (char *)(_UNK_0114deb0 + 0x114dcc4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114deb4 + 0x114dcd8));
    *pcVar9 = '\x01';
  }
  piVar10 = *(int **)(_UNK_0114deb8 + 0x114dcf0);
  puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar5,*puVar6,puVar6[1],puVar6[2],0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114debc + 0x114dd58));
    *pcVar9 = '\x01';
  }
  puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar5,*puVar6,puVar6[1],puVar6[2],0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  PrimeTween_Easing__op_Implicit_2ce2f30(&uStack_38,*(undefined4 *)(param_1 + 0x20),0);
  uVar4 = uStack_28;
  uVar3 = uStack_2c;
  uVar2 = uStack_30;
  uVar1 = uStack_34;
  uVar8 = uStack_38;
  if (*(int *)(**(int **)(_UNK_0114dec0 + 0x114ddd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_38,uVar7,0x3f800000,0x3f000000,uVar8,uVar1,uVar2,uVar3,uVar4,1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  PrimeTween_Easing__op_Implicit_2ce2f30(&uStack_38,*(undefined4 *)(param_1 + 0x20),0);
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_38,uVar8,0x3f800000,0x3f000000,uStack_38,uStack_34,uStack_30,uStack_2c,
             uStack_28,1,0,0,0,0,0);
  return;
}

