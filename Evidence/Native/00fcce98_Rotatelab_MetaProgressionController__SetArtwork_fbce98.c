/* IL2CPP: Rotatelab.MetaProgressionController$$SetArtwork
void Rotatelab_MetaProgressionController__SetArtwork (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$SetArtwork
   void Rotatelab_MetaProgressionController__SetArtwork (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__SetArtwork_fbce98(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_00fccfcc + 0xfcceac);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccfd0 + 0xfccec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccfd4 + 0xfccecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccfd8 + 0xfcced8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_00fccfdc + 0xfcceec);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x17c);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(iVar2 + 0x20);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar6,uVar3,**(undefined4 **)(_UNK_00fccfe0 + 0xfccf78));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(*(int *)(iVar2 + 0x10) + 8),
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

