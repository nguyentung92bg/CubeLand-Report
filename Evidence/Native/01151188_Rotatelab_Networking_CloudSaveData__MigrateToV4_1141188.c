/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV4
void Rotatelab_Networking_CloudSaveData__MigrateToV4 (Rotatelab_Networking_CloudSaveData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV4
   void Rotatelab_Networking_CloudSaveData__MigrateToV4 (Rotatelab_Networking_CloudSaveData_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveData__MigrateToV4_1141188(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01151310 + 0x11511a0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151314 + 0x11511b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151318 + 0x11511c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115131c + 0x11511cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151320 + 0x11511d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151324 + 0x11511e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151328 + 0x11511f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115132c + 0x11511fc));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_01151330 + 0x1151218),0,0);
  if (iVar1 < 100) {
    if (*(int *)(**(int **)(_UNK_01151334 + 0x1151234) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_18,0);
    if (*(int *)(**(int **)(_UNK_01151338 + 0x115125c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uStack_18,uStack_14,0);
  }
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_0115133c + 0x1151298),0,0);
  puVar3 = *(undefined4 **)(_UNK_01151340 + 0x11512b4);
  *(uint *)(param_1 + 0x98) = (iVar2 - 1U & ~((int)(iVar2 - 1U) >> 0x1f)) + iVar1 * 2;
  uVar4 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar3,0,0);
  puVar3 = *(undefined4 **)(_UNK_01151344 + 0x11512d4);
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  uVar4 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar3,0,0);
  puVar3 = *(undefined4 **)(_UNK_01151348 + 0x11512f4);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  uVar4 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar3,0xffffffff,0);
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  return;
}

