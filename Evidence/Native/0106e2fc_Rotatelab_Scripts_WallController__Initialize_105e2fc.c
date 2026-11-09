/* IL2CPP: Rotatelab.Scripts.WallController$$Initialize
void Rotatelab_Scripts_WallController__Initialize (Rotatelab_Scripts_WallController_o* __this, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WallController$$Initialize
   void Rotatelab_Scripts_WallController__Initialize (Rotatelab_Scripts_WallController_o* __this,
   UnityEngine_Vector3Int_o position, const MethodInfo* method); */

void Rotatelab_Scripts_WallController__Initialize_105e2fc
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  pcVar7 = (char *)(_UNK_0106e778 + 0x106e324);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e77c + 0x106e33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e780 + 0x106e348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e784 + 0x106e354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e788 + 0x106e360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e78c + 0x106e36c));
    *pcVar7 = '\x01';
  }
  Rotatelab_Scripts_WallController__set_Position_105e2ac(param_1,param_2,param_3,param_4);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar2 = UnityEngine_Random__Range_35f8b14(0,4,0);
  uVar3 = UnityEngine_Random__Range_35f8b14(0,4,0);
  uVar4 = UnityEngine_Random__Range_35f8b14(0,4,0);
  fVar9 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fStack_48 = fVar9 * _UNK_0106e770 * _UNK_0106e774;
  fStack_44 = fVar10 * _UNK_0106e770 * _UNK_0106e774;
  fStack_40 = fVar11 * _UNK_0106e770 * _UNK_0106e774;
  UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_58,&fStack_48,0);
  uVar2 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar2,uVar3,uVar4,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar7 = (char *)(_UNK_0106e790 + 0x106e4a0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e794 + 0x106e4b4));
    *pcVar7 = '\x01';
  }
  iVar5 = *(int *)(**(int **)(_UNK_0106e798 + 0x106e4cc) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
             *(undefined4 *)(iVar5 + 0x14),0);
  piVar8 = *(int **)(_UNK_0106e79c + 0x106e508);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(**(int **)(iVar1 + 0x5c) + 0xc),0);
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0106e7a0 + 0x106e588) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
    if (iVar5 == 0) goto LAB_0106e6e8;
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  piVar8 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Renderer__get_sharedMaterial_35c59b8(*(int *)(param_1 + 0x10),0);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106e7a4 + 0x106e5fc));
  UnityEngine_Material___ctor_35c7654(iVar1,uVar2,0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar1 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar8[3] <= uVar6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar8[uVar6 + 4] = iVar1;
  thunk_FUN_00ec5080(piVar8 + uVar6 + 4,iVar1);
  piVar8 = *(int **)(_UNK_0106e7a8 + 0x106e674);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  fVar10 = (float)VectorSignedToFloat((int)(uVar6 + ((uint)((int)uVar6 >> 0x1f) >> 0x1e)) >> 2,
                                      (byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat((int)uVar6 % 4,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetTextureOffset_35c7f48
            (iVar1,*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 4),fVar10 * 0.25,fVar9 * 0.25,0);
LAB_0106e6e8:
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(*(int *)(param_1 + 0x10),iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106e7ac + 0x106e718));
  Rotatelab_Scripts_WallController__get_Position_105e270(&uStack_58,param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__AddToGrid_1106d28(iVar1,param_1,uStack_58,uStack_54,uStack_50,0);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

