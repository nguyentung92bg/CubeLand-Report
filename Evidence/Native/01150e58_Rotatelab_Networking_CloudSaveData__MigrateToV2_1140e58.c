/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV2
void Rotatelab_Networking_CloudSaveData__MigrateToV2 (Rotatelab_Networking_CloudSaveData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV2
   void Rotatelab_Networking_CloudSaveData__MigrateToV2 (Rotatelab_Networking_CloudSaveData_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveData__MigrateToV2_1140e58(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01151048 + 0x1150e70);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115104c + 0x1150e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151050 + 0x1150e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151054 + 0x1150e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151058 + 0x1150ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115105c + 0x1150eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151060 + 0x1150ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151064 + 0x1150ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151068 + 0x1150ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115106c + 0x1150ee4));
    *pcVar6 = '\x01';
  }
  uVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_01151070 + 0x1150f04),1,0);
  puVar5 = *(undefined4 **)(_UNK_01151074 + 0x1150f18);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar5,0,0);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  Rotatelab_Save_SaveManager__GetDateTime_1082e14
            (&uStack_20,**(undefined4 **)(_UNK_01151078 + 0x1150f40),0,0,0);
  puVar5 = *(undefined4 **)(_UNK_0115107c + 0x1150f64);
  *(undefined4 *)(param_1 + 0x88) = uStack_20;
  *(undefined4 *)(param_1 + 0x8c) = uStack_1c;
  uVar1 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar5,0,0);
  puVar5 = *(undefined4 **)(_UNK_01151080 + 0x1150f80);
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  uVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar5,0,0);
  iVar8 = *(int *)(param_1 + 0xac);
  puVar5 = *(undefined4 **)(_UNK_01151084 + 0x1150fa4);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar5,0,0);
  iVar4 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01151088 + 0x1150fcc),0,0);
  uVar7 = 0;
  if (iVar4 != 0) {
    uVar7 = 2;
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_0115108c + 0x1150ffc);
  *(uint *)(iVar8 + 0x10) = uVar7 | uVar3;
  iVar4 = *(int *)(param_1 + 0xb0);
  uVar7 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar5,0,0);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01151090 + 0x1151024),0,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(uint *)(iVar4 + 0x10) = uVar7 & 0xfffffffd | (uVar3 & 1) << 1;
  return;
}

