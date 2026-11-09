/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$OnSceneUnloaded
void Rotatelab_SingletonBehaviour_object___OnSceneUnloaded (Rotatelab_SingletonBehaviour_T__o* __this, UnityEngine_SceneManagement_Scene_o scene, const MethodInfo_1A99DB8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$OnSceneUnloaded
   void Rotatelab_SingletonBehaviour_object___OnSceneUnloaded (Rotatelab_SingletonBehaviour_T__o*
   __this, UnityEngine_SceneManagement_Scene_o scene, const MethodInfo_1A99DB8* method); */

void Rotatelab_SingletonBehaviour_object___OnSceneUnloaded_1a99db8
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01aa9e38 + 0x1aa9dd0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9e3c + 0x1aa9de4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01aa9e40 + 0x1aa9df8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x10);
  pcVar4 = (char *)(_UNK_01aa9f70 + 0x1aa9e5c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f74 + 0x1aa9e70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f78 + 0x1aa9e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9f7c + 0x1aa9e88));
    *pcVar4 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01aa9f80 + 0x1aa9e9c));
  UnityEngine_Events_UnityAction_Scene____ctor_1c5fff8
            (uVar2,param_1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x18),0,
             unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  if (*(int *)(**(int **)(_UNK_01aa9f84 + 0x1aa9ecc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded_361d484(uVar2,0);
  iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  uVar2 = **(undefined4 **)(iVar3 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01aa9f88 + 0x1aa9f10) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_01aa9f88 + 0x1aa9f10));
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,param_1,0);
  if (iVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  **(undefined4 **)(iVar1 + 0x5c) = 0;
  return;
}

