/* IL2CPP: Rotatelab.Networking.HiroController$$ShowInternetConnectionDialogAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync (Rotatelab_Networking_HiroController_o* __this, System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$ShowInternetConnectionDialogAsync
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync
   (Rotatelab_Networking_HiroController_o* __this, System_String_o* message, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync_114ce04
               (undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_0115cee8 + 0x115ce24);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ceec + 0x115ce38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cef0 + 0x115ce44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cef4 + 0x115ce50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cef8 + 0x115ce5c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_0115cefc + 0x115ce70));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = **(int **)(_UNK_0115cf00 + 0x115ce8c);
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  Rotatelab_UI_GenericDialog__ShowAsync_1111a10
            (&uStack_28,iVar1,**(undefined4 **)(_UNK_0115cf04 + 0x115ce98),iVar3,
             **(undefined4 **)(_UNK_0115cf08 + 0x115cec0),*(undefined4 *)(param_2 + 0x60),0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

