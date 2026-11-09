/* IL2CPP: Rotatelab.Scripts.BlasterController$$BreakAllConnections
void Rotatelab_Scripts_BlasterController__BreakAllConnections (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$BreakAllConnections
   void Rotatelab_Scripts_BlasterController__BreakAllConnections
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__BreakAllConnections_10329f4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_01042aa0 + 0x1042a08);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042aa4 + 0x1042a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042aa8 + 0x1042a28));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x118) + 0xc);
  if (-1 < iVar3 + -1) {
    puVar4 = *(undefined4 **)(_UNK_01042aac + 0x1042a58);
    do {
      if (*(int *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = iVar3 + -1;
      iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x118),iVar3,*puVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BlasterController__BreakConnection_1032ab0
                (param_1,*(undefined4 *)(iVar1 + 0x24));
    } while (0 < iVar3);
  }
  return;
}

