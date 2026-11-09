/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetTab
void Rotatelab_Debugging_CreativeCanvasController__SetTab (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetTab
   void Rotatelab_Debugging_CreativeCanvasController__SetTab
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetTab_110d0ac(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  pcVar7 = (char *)(_UNK_0111d238 + 0x111d0c4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d23c + 0x111d0d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d240 + 0x111d0e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d244 + 0x111d0f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d248 + 0x111d0fc));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= iVar8) {
      return;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar1 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x28),iVar8,
                               **(undefined4 **)(_UNK_0111d24c + 0x111d144));
    iVar4 = 0x4c;
    bVar9 = iVar8 == *(int *)(param_1 + 100);
    if (bVar9) {
      iVar4 = 0x3c;
    }
    iVar5 = 0x48;
    if (bVar9) {
      iVar5 = 0x38;
    }
    iVar6 = 0x44;
    if (bVar9) {
      iVar6 = 0x34;
    }
    iVar2 = 0x40;
    if (iVar8 == *(int *)(param_1 + 100)) {
      iVar2 = 0x30;
    }
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar6),
               *(undefined4 *)(param_1 + iVar5),*(undefined4 *)(param_1 + iVar4),
               *(undefined4 *)(*piVar1 + 0x17c));
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x2c),iVar8,**(undefined4 **)(_UNK_0111d250 + 0x111d1e0));
    iVar4 = *(int *)(param_1 + 100);
    if (*(int *)(**(int **)(_UNK_0111d254 + 0x111d1f8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetVisibility_fc2a78(uVar3,iVar8 == iVar4,0,0);
    iVar8 = iVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

