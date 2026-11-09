/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$RequestOfferPopupWhenOnlineCoroutine
System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$RequestOfferPopupWhenOnlineCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_10e0c28
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f0c94 + 0x10f0c3c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0c98 + 0x10f0c50));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f0c9c + 0x10f0c64));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

