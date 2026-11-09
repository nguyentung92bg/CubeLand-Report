/* IL2CPP: Rotatelab.Scripts.BaseDockController$$Empty
void Rotatelab_Scripts_BaseDockController__Empty (Rotatelab_Scripts_BaseDockController_o* __this, Rotatelab_Scripts_BasePlaceableController_o* dockedPlaceable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController$$Empty
   void Rotatelab_Scripts_BaseDockController__Empty (Rotatelab_Scripts_BaseDockController_o* __this,
   Rotatelab_Scripts_BasePlaceableController_o* dockedPlaceable, const MethodInfo* method); */

void Rotatelab_Scripts_BaseDockController__Empty_100b530(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = (char *)(_UNK_0101b600 + 0x101b548);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b604 + 0x101b55c));
    *pcVar1 = '\x01';
  }
  piVar2 = *(int **)(_UNK_0101b608 + 0x101b574);
  piVar3 = param_1 + 5;
  iVar4 = *piVar3;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Equality_36033f4(iVar4,0,0);
  if (iVar4 == 0) {
    iVar4 = *piVar3;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar4,param_2,0);
    if (iVar4 == 0) {
      param_1[5] = 0;
      thunk_FUN_00ec5080(piVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0101b5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
      return;
    }
  }
  return;
}

