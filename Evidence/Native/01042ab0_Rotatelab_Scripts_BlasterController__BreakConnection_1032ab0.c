/* IL2CPP: Rotatelab.Scripts.BlasterController$$BreakConnection
void Rotatelab_Scripts_BlasterController__BreakConnection (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01042cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$BreakConnection
   void Rotatelab_Scripts_BlasterController__BreakConnection (Rotatelab_Scripts_BlasterController_o*
   __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__BreakConnection_1032ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_01042d6c + 0x1042acc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d70 + 0x1042ae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d74 + 0x1042aec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d78 + 0x1042af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d7c + 0x1042b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d80 + 0x1042b10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d84 + 0x1042b1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d88 + 0x1042b28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d8c + 0x1042b34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042d90 + 0x1042b40));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_14 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  if (*(int *)(**(int **)(_UNK_01042d94 + 0x1042b60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_BlasterController___BreakConnection_g__BreakConnectionInternal_120_0_1032db4
            (param_1,param_2);
  Rotatelab_Scripts_BlasterController___BreakConnection_g__BreakConnectionInternal_120_0_1032db4
            (param_2,param_1);
  if (*(int *)(**(int **)(_UNK_01042d98 + 0x1042ba4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&uStack_48,&iStack_14,**(undefined4 **)(_UNK_01042d9c + 0x1042bc4));
  uStack_20 = uStack_48;
  puStack_34 = &uStack_20;
  uStack_1c = puStack_44;
  iStack_38 = 0;
  if (iStack_14 != 0) {
    System_Collections_Generic_List_object___AddRange_267dcf0
              (iStack_14,*(undefined4 *)(param_1 + 0x120),
               **(undefined4 **)(_UNK_01042da0 + 0x1042c08));
    if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,iStack_14,**(undefined4 **)(_UNK_01042da4 + 0x1042c30));
    uStack_30 = uStack_48;
    uStack_2c = puStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    uStack_48 = 0;
    puVar3 = *(undefined4 **)(_UNK_01042da8 + 0x1042c60);
    puStack_44 = &uStack_30;
    while( true ) {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_30,*puVar3);
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_30,**(undefined4 **)(_UNK_01042dac + 0x1042c9c));
        iVar1 = iStack_38;
        Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                  (puStack_34,**(undefined4 **)(_UNK_01042db0 + 0x1042cc4));
        if (iVar1 != 0) {
          FUN_00ec3a6c(iVar1);
        }
        return;
      }
      if (iStack_24 == 0) break;
      Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters_103252c(iStack_24);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

