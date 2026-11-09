/* IL2CPP: Rotatelab.SeasonPass.SeasonPassCheckpoint$$Init
void Rotatelab_SeasonPass_SeasonPassCheckpoint__Init (Rotatelab_SeasonPass_SeasonPassCheckpoint_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonPassCheckpointData_o* data, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassCheckpoint$$Init
   void Rotatelab_SeasonPass_SeasonPassCheckpoint__Init
   (Rotatelab_SeasonPass_SeasonPassCheckpoint_o* __this,
   Rotatelab_SeasonPass_SeasonPassSo_SeasonPassCheckpointData_o* data, int32_t index, const
   MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassCheckpoint__Init_10a053c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pcVar4 = (char *)(_UNK_010b086c + 0x10b0564);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0870 + 0x10b0578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0874 + 0x10b0584));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x34) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x34),param_2);
  piVar8 = (int *)(param_1 + 0x38);
  *piVar8 = param_3;
  *(bool *)(param_1 + 0x3c) = param_3 == 0;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),0);
    piVar6 = *(int **)(param_1 + 0x20);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x2b0))
              (piVar6,**(undefined4 **)(*(int *)(*(int *)(_UNK_010b0878 + 0x10b0754) + 0x48) + 0x5c)
               ,*(undefined4 *)(*piVar6 + 0x2b4));
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010b087c + 0x10b05c4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0x34);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (uVar7,**(undefined4 **)(_UNK_010b0880 + 0x10b05e4));
    iVar3 = 0x2c;
    if (param_3 < iVar1) {
      iVar3 = 0x28;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + iVar3),0);
    piVar6 = *(int **)(param_1 + 0x20);
    uVar2 = System_Int32__ToString_2b6b9ec(piVar8,0);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar2,*(undefined4 *)(*piVar6 + 0x2b4));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
    pcVar4 = (char *)(_UNK_010b0884 + 0x10b0684);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b0888 + 0x10b0698));
      *pcVar4 = '\x01';
    }
    iVar3 = *(int *)(**(int **)(_UNK_010b088c + 0x10b06ac) + 0x5c);
    fVar10 = *(float *)(iVar3 + 0xc);
    fVar11 = *(float *)(iVar3 + 0x10);
    fVar12 = *(float *)(iVar3 + 0x14);
    iVar3 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (uVar7,**(undefined4 **)(_UNK_010b0890 + 0x10b06bc));
    fVar9 = 1.0;
    if (iVar3 == param_3) {
      fVar9 = _UNK_010b0868;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar1,fVar10 * fVar9,fVar11 * fVar9,fVar12 * fVar9,0);
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b0894 + 0x10b0790));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(iVar1 + 0x34),**(undefined4 **)(_UNK_010b0898 + 0x10b07b0));
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),iVar1 == param_3,0);
  piVar6 = *(int **)(param_1 + 0x14);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0xe0))
            (piVar6,*(undefined4 *)(param_2 + 8),*piVar8,*(undefined4 *)(*piVar6 + 0xe4));
  piVar8 = *(int **)(param_1 + 0x18);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010b0864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar8 + 0xe0))
            (piVar8,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(*piVar8 + 0xe4));
  return;
}

