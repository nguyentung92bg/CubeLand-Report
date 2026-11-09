/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<RequestOfferPopupWhenOnlineCoroutine>d__47$$System.IDisposable.Dispose
void Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__System_IDisposable_Dispose (Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CloudRush.CloudRushManager.<RequestOfferPopupWhenOnlineCoroutine>d__47$$System.IDisposable.Dispose
   void 
   Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__System_IDisposable_Dispose
   (Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47_o* __this,
   const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__System_IDisposable_Dispose_10e3914
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) != 1 && *(int *)(param_1 + 8) != -3) {
    return;
  }
  pcVar5 = (char *)(_UNK_010f3d20 + 0x10f3c80);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3d24 + 0x10f3c94));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010f3d28 + 0x10f3cc0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_010f3d0c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010f3d28 + 0x10f3cc0),0);
LAB_010f3d0c:
                    /* WARNING: Could not recover jumptable at 0x010f3d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

