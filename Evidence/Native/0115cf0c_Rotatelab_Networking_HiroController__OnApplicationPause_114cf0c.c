/* IL2CPP: Rotatelab.Networking.HiroController$$OnApplicationPause
void Rotatelab_Networking_HiroController__OnApplicationPause (Rotatelab_Networking_HiroController_o* __this, bool isPaused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$OnApplicationPause
   void Rotatelab_Networking_HiroController__OnApplicationPause
   (Rotatelab_Networking_HiroController_o* __this, bool isPaused, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__OnApplicationPause_114cf0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0115cfd0 + 0x115cf24);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cfd4 + 0x115cf38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cfd8 + 0x115cf44));
    *pcVar4 = '\x01';
  }
  if (param_2 != 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0115cfdc + 0x115cf60));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Hiro_System_Systems__PauseResumeAsync_2979ac4(*(int *)(param_1 + 0x1c),param_2,0);
  if (*(int *)(**(int **)(_UNK_0115cfe0 + 0x115cfac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_00fd30cc + 0xfd3030);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd30d0 + 0xfd3044),1,0);
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2a93b18(&uStack_50,0);
  puVar3 = (undefined4 *)((uint)&uStack_40 | 4);
  *puVar3 = uStack_50;
  puVar3[1] = uStack_4c;
  puVar3[2] = uStack_48;
  puVar3[3] = uStack_44;
  thunk_FUN_00ec5080(puVar3,0);
  puVar3[4] = uVar2;
  thunk_FUN_00ec5080(puVar3 + 4,uVar2);
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  uStack_40 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_Extensions__Forget_d__98__13eed24
            (puVar3,&uStack_40,**(undefined4 **)(_UNK_00fd30d4 + 0xfd30b4));
  return;
}

