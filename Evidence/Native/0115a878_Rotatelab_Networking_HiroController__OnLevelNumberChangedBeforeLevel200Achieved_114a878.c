/* IL2CPP: Rotatelab.Networking.HiroController$$OnLevelNumberChangedBeforeLevel200Achieved
void Rotatelab_Networking_HiroController__OnLevelNumberChangedBeforeLevel200Achieved (Rotatelab_Networking_HiroController_o* __this, int64_t levelNumber, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$OnLevelNumberChangedBeforeLevel200Achieved
   void Rotatelab_Networking_HiroController__OnLevelNumberChangedBeforeLevel200Achieved
   (Rotatelab_Networking_HiroController_o* __this, int64_t levelNumber, const MethodInfo* method);
    */

void Rotatelab_Networking_HiroController__OnLevelNumberChangedBeforeLevel200Achieved_114a878
               (undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uStack_19;
  
  pcVar3 = (char *)(_UNK_0115a96c + 0x115a898);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a970 + 0x115a8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a974 + 0x115a8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a978 + 0x115a8c4));
    *pcVar3 = '\x01';
  }
  uStack_19 = 0;
  if ((int)(uint)(param_3 < 0xc9) <= param_4) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a97c + 0x115a900));
    System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_0115a980 + 0x115a920),0)
    ;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ObservableValue_long___remove_OnValueChanged_185d57c
              (iVar1,uVar2,**(undefined4 **)(_UNK_0115a984 + 0x115a944));
    uStack_19 = Rotatelab_Networking_HiroController__SendLevel200AchievedAsync_114a988(param_1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_19,0);
  }
  return;
}

