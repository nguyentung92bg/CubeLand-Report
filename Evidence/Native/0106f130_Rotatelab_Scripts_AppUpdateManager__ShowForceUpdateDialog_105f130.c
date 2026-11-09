/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$ShowForceUpdateDialog
void Rotatelab_Scripts_AppUpdateManager__ShowForceUpdateDialog (Rotatelab_Scripts_AppUpdateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$ShowForceUpdateDialog
   void Rotatelab_Scripts_AppUpdateManager__ShowForceUpdateDialog
   (Rotatelab_Scripts_AppUpdateManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_AppUpdateManager__ShowForceUpdateDialog_105f130(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_0106f324 + 0x106f148);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f328 + 0x106f15c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f32c + 0x106f168));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f330 + 0x106f174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f334 + 0x106f180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f338 + 0x106f18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f33c + 0x106f198));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0106f340 + 0x106f1ac);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 0x5c) + 0xd);
  iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_0106f344 + 0x106f1dc));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (cVar1 == '\0') {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106f358 + 0x106f2b8));
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0106f35c + 0x106f2dc),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_GenericDialog__Show_1111834
              (iVar2,**(undefined4 **)(_UNK_0106f364 + 0x106f30c),uVar7,
               **(undefined4 **)(_UNK_0106f360 + 0x106f300),uVar4,0);
  }
  else {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106f348 + 0x106f224));
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0106f34c + 0x106f248),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_GenericDialog__ShowWithOKCancelButtons_1111ed8
              (iVar2,**(undefined4 **)(_UNK_0106f354 + 0x106f278),uVar7,
               **(undefined4 **)(_UNK_0106f350 + 0x106f26c),uVar4,0,0);
  }
  return;
}

