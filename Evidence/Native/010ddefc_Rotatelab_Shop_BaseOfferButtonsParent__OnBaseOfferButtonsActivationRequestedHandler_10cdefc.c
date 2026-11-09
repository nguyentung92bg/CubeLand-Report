/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnBaseOfferButtonsActivationRequestedHandler
void Rotatelab_Shop_BaseOfferButtonsParent__OnBaseOfferButtonsActivationRequestedHandler (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010de1a4) */
/* WARNING: Removing unreachable block (ram,0x010de200) */
/* WARNING: Removing unreachable block (ram,0x010de1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnBaseOfferButtonsActivationRequestedHandler
   void Rotatelab_Shop_BaseOfferButtonsParent__OnBaseOfferButtonsActivationRequestedHandler
   (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, bool isActive, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__OnBaseOfferButtonsActivationRequestedHandler_10cdefc
               (int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  int *piVar6;
  float fVar7;
  
  pcVar5 = (char *)(_UNK_010ddfa0 + 0x10ddf14);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddfa4 + 0x10ddf28));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ddfa8 + 0x10ddf3c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(char *)(iVar3 + 0x56) == '\0') && (param_2 != 0)) {
    fVar7 = *(float *)(param_1 + 0x20);
    pfVar4 = (float *)(param_1 + 0x20);
  }
  else {
    pfVar4 = (float *)(param_1 + 0x24);
    fVar7 = -*(float *)(param_1 + 0x24);
  }
  Rotatelab_Shop_BaseOfferButtonsParent__MoveLeftGrid_10cdfac(param_1,fVar7,0);
  fVar7 = *pfVar4;
  pcVar5 = (char *)(_UNK_010de240 + 0x10de120);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de244 + 0x10de134));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010de248 + 0x10de14c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if ((ABS(fVar7) <= _UNK_010de23c) && (*(int *)(param_1 + 0x1c) != 0)) {
    return;
  }
  piVar6 = (int *)(param_1 + 0x2c);
  if (*piVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar6,0,0);
  }
  iVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50
                    (*(undefined4 *)(param_1 + 0x18),fVar7,0x3e99999a,0,0);
  *piVar6 = iVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

