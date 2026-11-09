/* IL2CPP: Rotatelab.Boosters.CannonRig$$get_MuzzlePosition
UnityEngine_Vector3_o Rotatelab_Boosters_CannonRig__get_MuzzlePosition (Rotatelab_Boosters_CannonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$get_MuzzlePosition
   UnityEngine_Vector3_o Rotatelab_Boosters_CannonRig__get_MuzzlePosition
   (Rotatelab_Boosters_CannonRig_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__get_MuzzlePosition_1133ef4(undefined8 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_01143fb8 + 0x1143f10);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143fbc + 0x1143f24));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(**(int **)(_UNK_01143fc0 + 0x1143f38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar1 == 0) {
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x14);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

