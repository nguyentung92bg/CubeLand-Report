/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SaveToLocal
void Rotatelab_Networking_CloudSaveManager__SaveToLocal (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SaveToLocal
   void Rotatelab_Networking_CloudSaveManager__SaveToLocal (Rotatelab_Networking_CloudSaveManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_011529c4 + 0x11527f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011529c8 + 0x1152808));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x14);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_28 = 0;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar1 = Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer_1143290(param_1,0),
     iVar1 != 0)) {
    Rotatelab_Networking_CloudSaveManager__PreparePendingRemoteData_114349c(param_1);
    iVar5 = *(int *)(param_1 + 0x18);
  }
  if (*(int *)(**(int **)(_UNK_011529cc + 0x115285c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_40,0);
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  uVar6 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_28,0);
  iVar1 = _UNK_011529d0;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined8 *)(iVar5 + 0x10) = uVar6;
  if (*(char *)(iVar1 + 0x11528b4) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011529d4 + 0x11528c8));
    *(char *)(iVar1 + 0x11528b4) = '\x01';
  }
  uVar4 = **(undefined4 **)(_UNK_011529d8 + 0x11528dc);
  uVar2 = Rotatelab_Networking_CloudSaveManager__SerializeData_1143c64
                    (*(undefined4 **)(_UNK_011529d8 + 0x11528dc),iVar5);
  UnityEngine_PlayerPrefs__SetString_35f7060(uVar4,uVar2,0);
  UnityEngine_PlayerPrefs__Save_35f7950(0);
  return;
}

