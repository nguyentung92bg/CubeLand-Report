/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$ShowForTrigger
void Rotatelab_Shop_BaseOfferButton__ShowForTrigger (Rotatelab_Shop_BaseOfferButton_o* __this, int32_t trigger, System_Action_bool__o* onClosed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$ShowForTrigger
   void Rotatelab_Shop_BaseOfferButton__ShowForTrigger (Rotatelab_Shop_BaseOfferButton_o* __this,
   int32_t trigger, System_Action_bool__o* onClosed, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButton__ShowForTrigger_10cc610(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010dc7f4 + 0x10dc62c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc7f8 + 0x10dc640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc7fc + 0x10dc64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc800 + 0x10dc658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc804 + 0x10dc664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc808 + 0x10dc670));
    *pcVar7 = '\x01';
  }
  param_1[0xc] = param_3;
  thunk_FUN_00ec5080(param_1 + 0xc,param_3);
  puVar3 = *(undefined4 **)(_UNK_010dc80c + 0x10dc69c);
  *(undefined1 *)(param_1 + 0xd) = 0;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar4 + 0x14) + 0x10) != 0) {
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_1[6],0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Transform__get_parent_36148d8(iVar4,0);
    param_1[0xe] = iVar4;
    thunk_FUN_00ec5080(param_1 + 0xe,iVar4);
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_1[6],0);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010dc810 + 0x10dc748));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615994(iVar4,uVar6,0,0);
  }
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010dc814 + 0x10dc7ac));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = **(undefined4 **)(_UNK_010dc818 + 0x10dc7c4);
  if (param_2 == 0) {
    uVar6 = **(undefined4 **)(_UNK_010dc81c + 0x10dc7d0);
  }
  puVar3 = (undefined4 *)(iVar4 + 0x34);
  *puVar3 = uVar6;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

