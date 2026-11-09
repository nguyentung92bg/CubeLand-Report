/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Update
void Rotatelab_Ads_MainThreadDispatcher__Update (Rotatelab_Ads_MainThreadDispatcher_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01108ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Update
   void Rotatelab_Ads_MainThreadDispatcher__Update (Rotatelab_Ads_MainThreadDispatcher_o* __this,
   const MethodInfo* method); */

void Rotatelab_Ads_MainThreadDispatcher__Update_10f8ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  char cStack_29;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_0110904c + 0x1108cb8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109050 + 0x1108ccc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109054 + 0x1108cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109058 + 0x1108ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110905c + 0x1108cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109060 + 0x1108cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109064 + 0x1108d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109068 + 0x1108d14));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0110906c + 0x1108d2c);
  uStack_28 = 0;
  cStack_29 = '\0';
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  cStack_29 = '\0';
  uStack_28 = **(undefined4 **)(iVar1 + 0x5c);
  System_Threading_Monitor__Enter_2bdfb90(uStack_28,&cStack_29,0);
  piVar9 = *(int **)(_UNK_01109070 + 0x1108d84);
  while( true ) {
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(iVar1 + 0x5c) + 0x14) < 1) {
      if (cStack_29 != '\0') {
        System_Threading_Monitor__Exit_2be3444(uStack_28,0);
      }
      iVar1 = 0;
      puVar3 = *(undefined4 **)(_UNK_01109078 + 0x1108ebc);
      while( true ) {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) <= iVar1) {
          if (iVar6 != 0) {
            iVar1 = *(int *)(iVar6 + 0xc);
            *(undefined4 *)(iVar6 + 0xc) = 0;
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            if (0 < iVar1) {
              System_Array__Clear_2b96cdc(*(undefined4 *)(iVar6 + 8),0,iVar1,0);
            }
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar1,*puVar3);
        if (iVar6 == 0) break;
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x14));
        iVar1 = iVar1 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar5;
    iVar6 = *(int *)(param_1 + 0x10);
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_Collections_Generic_Queue_object___Dequeue_18fcc0c
                      (**(int **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_01109074 + 0x1108df4));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar6 + 8);
    uVar7 = *(uint *)(iVar6 + 0xc);
    iVar8 = *piVar9;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar1 == 0) break;
    if (uVar7 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar7 + 1;
      puVar3 = (undefined4 *)(iVar1 + uVar7 * 4 + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_00ec5080(puVar3,uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar6,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

