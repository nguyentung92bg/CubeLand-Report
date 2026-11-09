/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$Initialize
void Rotatelab_Scripts_HiddenChestController__Initialize (Rotatelab_Scripts_HiddenChestController_o* __this, Rotatelab_HiddenChestData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$Initialize
   void Rotatelab_Scripts_HiddenChestController__Initialize
   (Rotatelab_Scripts_HiddenChestController_o* __this, Rotatelab_HiddenChestData_o* data, const
   MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestController__Initialize_100f9e0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_0101fe58 + 0x101fa04);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe5c + 0x101fa18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe60 + 0x101fa24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe64 + 0x101fa30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe68 + 0x101fa3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe6c + 0x101fa48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe70 + 0x101fa54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe74 + 0x101fa60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe78 + 0x101fa6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe7c + 0x101fa78));
    *pcVar6 = '\x01';
  }
  param_1[0xe] = param_2;
  thunk_FUN_00ec5080(param_1 + 0xe,param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HpTextData__get_Rotation_1070db8(&uStack_48,*(int *)(iVar7 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar2,uVar9,uVar3,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  fVar11 = *(float *)(param_2 + 0x14);
  pcVar6 = (char *)(_UNK_0101fe80 + 0x101fb58);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101fe84 + 0x101fb6c));
    *pcVar6 = '\x01';
  }
  fVar11 = fVar11 + fVar11;
  if (*(int *)(**(int **)(_UNK_0101fe88 + 0x101fb84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar12 = (double)fVar11;
  dVar13 = (double)modf(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),&uStack_48);
  if (0.0 <= fVar11) {
    if (dVar13 != 0.5) {
      dVar12 = (double)floor(SUB84(dVar12 + 0.5,0),(int)((ulonglong)(dVar12 + 0.5) >> 0x20));
      goto LAB_0101fc20;
    }
    dVar12 = 1.0;
  }
  else {
    if (dVar13 != -0.5) {
      dVar12 = (double)ceil(SUB84(dVar12 + -0.5,0),(int)((ulonglong)(dVar12 + -0.5) >> 0x20));
      goto LAB_0101fc20;
    }
    dVar12 = -1.0;
  }
  dVar13 = (double)CONCAT44(uStack_44,uStack_48);
  uVar4 = FUN_00f88224(uStack_48,uStack_44);
  dVar12 = dVar13 + dVar12;
  if ((uVar4 & 1) == 0) {
    dVar12 = dVar13;
  }
LAB_0101fc20:
  uVar2 = (undefined4)(longlong)dVar12;
  piVar10 = *(int **)(_UNK_0101fe8c + 0x101fc34);
  iVar7 = param_1[0x10];
  iVar1 = *piVar10;
  if (dVar12 == _UNK_0101fe50) {
    uVar2 = 0x80000000;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar5[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar3 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101fe90 + 0x101fc90));
    System_Func_HiddenChestController_HiddenChestPrefabData__int__bool____ctor_23a0624
              (iVar8,uVar3,**(undefined4 **)(_UNK_0101fe94 + 0x101fcb0),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_0101fe98 + 0x101fcd8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Find_HiddenChestController_HiddenChestPrefabData__int__1486f58
            (&uStack_48,iVar7,uVar2,iVar8,**(undefined4 **)(_UNK_0101fe9c + 0x101fd00));
  iVar1 = param_1[0xf];
  if (*(int *)(**(int **)(_UNK_0101fea0 + 0x101fd18) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__Instantiate_object__14d4dd0
            (uStack_44,iVar1,**(undefined4 **)(_UNK_0101fea4 + 0x101fd40));
  iVar1 = UnityEngine_Component__GetComponentInChildren_object__143f57c
                    (param_1,**(undefined4 **)(_UNK_0101fea8 + 0x101fd54));
  piVar10 = param_1 + 0x11;
  *piVar10 = iVar1;
  thunk_FUN_00ec5080(piVar10,iVar1);
  if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_HiddenChestLockController__Initialize_100feb0(*piVar10);
  if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_1[0x13] = *(int *)(*piVar10 + 0x18);
  thunk_FUN_00ec5080(param_1 + 0x13);
  if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_1[4] = *(int *)(param_1[0x11] + 0x14);
  thunk_FUN_00ec5080();
  iVar1 = UnityEngine_Component__GetComponentInChildren_object__143f57c
                    (param_1,**(undefined4 **)(_UNK_0101feac + 0x101fdd8));
  param_1[0x12] = iVar1;
  thunk_FUN_00ec5080();
  iVar1 = *(int *)(param_2 + 0x24);
  param_1[0x14] = iVar1;
  param_1[0x15] = iVar1;
  Rotatelab_Scripts_HiddenChestController__UpdateHealthTexts_100ff34(param_1);
  (**(code **)(*param_1 + 0x108))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*param_1 + 0x10c));
  Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,1,0);
  Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974(param_1,1,0);
  return;
}

