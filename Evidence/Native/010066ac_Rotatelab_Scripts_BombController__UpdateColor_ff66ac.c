/* IL2CPP: Rotatelab.Scripts.BombController$$UpdateColor
void Rotatelab_Scripts_BombController__UpdateColor (Rotatelab_Scripts_BombController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$UpdateColor
   void Rotatelab_Scripts_BombController__UpdateColor (Rotatelab_Scripts_BombController_o* __this,
   int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_BombController__UpdateColor_ff66ac(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01006b50 + 0x10066c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006b54 + 0x10066dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006b58 + 0x10066e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006b5c + 0x10066f4));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01006b60 + 0x1006708);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar2,param_2);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar8 = *(int **)(_UNK_01006b64 + 0x100675c);
  iVar11 = *(int *)(iVar5 + 0x10);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  uVar3 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  uVar9 = *(undefined4 *)(iVar2 + 0x10);
  uVar7 = *(undefined4 *)(iVar2 + 0x14);
  uVar10 = *(undefined4 *)(iVar2 + 0x18);
  if (*(int *)(**(int **)(_UNK_01006b68 + 0x1006798) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__WithOpacity_fc175c(&uStack_34,uVar6,uVar9,uVar7,uVar10,0x3dd0e560,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c(iVar11,uVar3,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x10),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b6c + 0x1006840) + 0x5c) + 0x68),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x10),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b70 + 0x10068b4) + 0x5c) + 0x1c),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x10),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b74 + 0x1006928) + 0x5c) + 0x18),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x10),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b78 + 0x100699c) + 0x5c) + 0x20),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x10),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b7c + 0x1006a10) + 0x5c) + 0xc),
             *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
             *(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x14),
             *(undefined4 *)(*(int *)(**(int **)(_UNK_01006b80 + 0x1006a84) + 0x5c) + 0x5c),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (*(int *)(iVar5 + 0x18),**(undefined4 **)(**(int **)(_UNK_01006b84 + 0x1006b00) + 0x5c),
             *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  return;
}

