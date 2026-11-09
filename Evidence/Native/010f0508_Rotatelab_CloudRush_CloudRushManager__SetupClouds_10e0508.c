/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$SetupClouds
void Rotatelab_CloudRush_CloudRushManager__SetupClouds (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$SetupClouds
   void Rotatelab_CloudRush_CloudRushManager__SetupClouds (Rotatelab_CloudRush_CloudRushManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__SetupClouds_10e0508(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar3 = (char *)(_UNK_010f06ac + 0x10f051c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06b0 + 0x10f0530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06b4 + 0x10f053c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06b8 + 0x10f0548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06bc + 0x10f0554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06c0 + 0x10f0560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f06c4 + 0x10f056c));
    *pcVar3 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010f06c8 + 0x10f0580);
  iVar4 = *(int *)(param_1 + 0x78);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f06cc + 0x10f05cc));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010f06d0 + 0x10f05ec),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar4,iVar5,**(undefined4 **)(_UNK_010f06d4 + 0x10f0624));
  iVar1 = 0;
  puVar2 = *(undefined4 **)(_UNK_010f06d8 + 0x10f063c);
  do {
    if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x78) + 0xc) <= iVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x9c) <= iVar1) {
      if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x78),iVar1,*puVar2);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__SetVisibility_10db3b0(iVar4,1,1);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

