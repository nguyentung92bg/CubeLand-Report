/* IL2CPP: Rotatelab.Shop.BaseOfferButton.<>c$$<ClosePopup>b__27_0
void Rotatelab_Shop_BaseOfferButton___c___ClosePopup_b__27_0 (Rotatelab_Shop_BaseOfferButton___c_o* __this, Rotatelab_Shop_BaseOfferButton_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButton.<>c$$<ClosePopup>b__27_0
   void Rotatelab_Shop_BaseOfferButton___c___ClosePopup_b__27_0
   (Rotatelab_Shop_BaseOfferButton___c_o* __this, Rotatelab_Shop_BaseOfferButton_o* this, const
   MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButton___c___ClosePopup_b__27_0_10cd0a0(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_010dd1b0 + 0x10dd0b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd1b4 + 0x10dd0c8));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
  }
  puVar5 = (undefined4 *)(param_2 + 0x38);
  uVar6 = *puVar5;
  if (*(int *)(**(int **)(_UNK_010dd1b8 + 0x10dd124) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x18),0);
  if (iVar3 != 0) {
    UnityEngine_Transform__SetParent_3615994(iVar3,*puVar5,0,0);
    *puVar5 = 0;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

