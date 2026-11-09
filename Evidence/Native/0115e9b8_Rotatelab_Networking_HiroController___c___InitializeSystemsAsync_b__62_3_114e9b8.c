/* IL2CPP: Rotatelab.Networking.HiroController.<>c$$<InitializeSystemsAsync>b__62_3
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController___c___InitializeSystemsAsync_b__62_3 (Rotatelab_Networking_HiroController___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<>c$$<InitializeSystemsAsync>b__62_3
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController___c___InitializeSystemsAsync_b__62_3
   (Rotatelab_Networking_HiroController___c_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c___InitializeSystemsAsync_b__62_3_114e9b8
               (undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0115ea2c + 0x115e9d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ea30 + 0x115e9e4));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0115ea34 + 0x115e9f8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__RefreshAsync_11429e8(&uStack_18,iVar1,0);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

