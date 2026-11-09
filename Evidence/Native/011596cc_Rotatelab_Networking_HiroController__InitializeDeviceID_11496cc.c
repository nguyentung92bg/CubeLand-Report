/* IL2CPP: Rotatelab.Networking.HiroController$$InitializeDeviceID
void Rotatelab_Networking_HiroController__InitializeDeviceID (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$InitializeDeviceID
   void Rotatelab_Networking_HiroController__InitializeDeviceID
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__InitializeDeviceID_11496cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01159888 + 0x11596e4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115988c + 0x11596f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159890 + 0x1159704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159894 + 0x1159710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159898 + 0x115971c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115989c + 0x1159728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011598a0 + 0x1159734));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar3 = (undefined4 *)(param_1 + 0x18);
  uStack_28 = 0;
  iVar1 = System_String__IsNullOrEmpty_2a0a844(*puVar3,0);
  if (iVar1 != 0) {
    puVar6 = *(undefined4 **)(_UNK_011598a8 + 0x1159778);
    uVar2 = Rotatelab_Save_SaveManager__GetString_10790b0
                      (*puVar6,**(undefined4 **)(_UNK_011598a4 + 0x115976c),0);
    iVar1 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar2,0);
    if (iVar1 != 0) {
      uVar2 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier_360ed30(0);
      iVar1 = System_String__op_Equality_2a0975c
                        (uVar2,**(undefined4 **)(_UNK_011598ac + 0x11597ac),0);
      if (iVar1 != 0) {
        System_Guid__NewGuid_2b65864(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uStack_20 = uStack_30;
        uStack_1c = uStack_2c;
        uVar2 = System_Guid__ToString_2b67b58(&uStack_28,0);
      }
      Rotatelab_Save_SaveManager__SetString_10791b8(*puVar6,uVar2,0);
      Rotatelab_Save_SaveManager__Save_1082f74(0);
    }
    *puVar3 = uVar2;
    thunk_FUN_00ec5080(puVar3,uVar2);
    piVar5 = *(int **)(_UNK_011598b0 + 0x1159818);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x78) != '\0') {
      uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_011598b4 + 0x115984c),*puVar3,0);
      if (*(int *)(**(int **)(_UNK_011598b8 + 0x1159864) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(uVar2,0);
    }
  }
  return;
}

