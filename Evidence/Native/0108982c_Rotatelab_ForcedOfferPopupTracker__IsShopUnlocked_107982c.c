/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$IsShopUnlocked
bool Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked (Rotatelab_Networking_OfferPopupRule_o* rule, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$IsShopUnlocked
   bool Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked (Rotatelab_Networking_OfferPopupRule_o*
   rule, const MethodInfo* method); */

bool Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked_107982c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010898b0 + 0x1089840);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010898b4 + 0x1089854));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010898b8 + 0x1089868) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(param_1 + 0xc) <= iVar2;
}

