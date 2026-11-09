/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$OnRemoved
void Rotatelab_SingletonBehaviour_object___OnRemoved (Rotatelab_SingletonBehaviour_T__o* __this, const MethodInfo_1A99E44* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$OnRemoved
   void Rotatelab_SingletonBehaviour_object___OnRemoved (Rotatelab_SingletonBehaviour_T__o* __this,
   const MethodInfo_1A99E44* method); */

void Rotatelab_SingletonBehaviour_object___OnRemoved_1a99e44(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01aa9f70 + 0x1aa9e5c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f74 + 0x1aa9e70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f78 + 0x1aa9e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f7c + 0x1aa9e88));
    *pcVar3 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01aa9f80 + 0x1aa9e9c));
  UnityEngine_Events_UnityAction_Scene____ctor_1c5fff8
            (uVar1,param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x18),0);
  if (*(int *)(**(int **)(_UNK_01aa9f84 + 0x1aa9ecc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded_361d484(uVar1,0);
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  uVar1 = **(undefined4 **)(iVar2 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01aa9f88 + 0x1aa9f10) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_01aa9f88 + 0x1aa9f10));
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,param_1,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  **(undefined4 **)(iVar2 + 0x5c) = 0;
  return;
}

