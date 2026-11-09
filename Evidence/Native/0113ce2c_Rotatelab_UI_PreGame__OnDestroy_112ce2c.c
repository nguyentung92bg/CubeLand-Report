/* IL2CPP: Rotatelab.UI.PreGame$$OnDestroy
void Rotatelab_UI_PreGame__OnDestroy (Rotatelab_UI_PreGame_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreGame$$OnDestroy
   void Rotatelab_UI_PreGame__OnDestroy (Rotatelab_UI_PreGame_o* __this, const MethodInfo* method);
    */

void Rotatelab_UI_PreGame__OnDestroy_112ce2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0113cf90 + 0x113ce40);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cf94 + 0x113ce54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cf98 + 0x113ce60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cf9c + 0x113ce6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cfa0 + 0x113ce78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cfa4 + 0x113ce84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cfa8 + 0x113ce90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cfac + 0x113ce9c));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0113cfb0 + 0x113ceb0);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x17c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113cfb4 + 0x113ced4));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_0113cfb8 + 0x113cef4),0)
  ;
  uVar2 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar5,uVar2,**(undefined4 **)(_UNK_0113cfbc + 0x113cf0c));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x17c) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                    (param_1 + 0x1c,**(undefined4 **)(_UNK_0113cfc0 + 0x113cf34));
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0113cfc4 + 0x113cf50) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = **(int **)(_UNK_0113cfc8 + 0x113cf80);
    iVar1 = *(int *)(iVar3 + 0x1c);
    if (iVar1 == 0) {
      FUN_00efd7c4(iVar3);
      iVar1 = *(int *)(iVar3 + 0x1c);
    }
    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___Release_17b6d98
              (&stack0xffffffec,*(undefined4 *)(iVar1 + 4));
    return;
  }
  return;
}

