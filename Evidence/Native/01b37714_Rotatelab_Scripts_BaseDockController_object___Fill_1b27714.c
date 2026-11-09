/* IL2CPP: Rotatelab.Scripts.BaseDockController<object>$$Fill
void Rotatelab_Scripts_BaseDockController_object___Fill (Rotatelab_Scripts_BaseDockController_T__o* __this, Il2CppObject* placeable, const MethodInfo_1B27714* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController<object>$$Fill
   void Rotatelab_Scripts_BaseDockController_object___Fill
   (Rotatelab_Scripts_BaseDockController_T__o* __this, Il2CppObject* placeable, const
   MethodInfo_1B27714* method); */

void Rotatelab_Scripts_BaseDockController_object___Fill_1b27714(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(_UNK_0101b484 + 0x101b400);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b488 + 0x101b414),param_2,0);
    *pcVar1 = '\x01';
  }
  iVar2 = param_1[5];
  if (*(int *)(**(int **)(_UNK_0101b48c + 0x101b42c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar2,param_2,0);
  if (iVar2 != 0) {
    return;
  }
  param_1[5] = param_2;
  thunk_FUN_00ec5080(param_1 + 5,param_2);
                    /* WARNING: Could not recover jumptable at 0x0101b480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
  return;
}

