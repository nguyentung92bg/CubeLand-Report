/* IL2CPP: Rotatelab.Ads.AdManager$$Start
void Rotatelab_Ads_AdManager__Start (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$Start
   void Rotatelab_Ads_AdManager__Start (Rotatelab_Ads_AdManager_o* __this, const MethodInfo*
   method); */

void Rotatelab_Ads_AdManager__Start_10f5aec(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_01105bf4 + 0x1105b00);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105bf8 + 0x1105b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105bfc + 0x1105b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105c00 + 0x1105b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105c04 + 0x1105b38));
    *pcVar6 = '\x01';
  }
  iVar4 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01105c08 + 0x1105b4c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar4 + 0xe) != '\0') {
    uVar5 = Rotatelab_Ads_AdManager__InitializeCoroutine_10f5c18(param_1);
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar5,0);
  }
  iVar4 = Rotatelab_Ads_AdManager__get_IsEnabled_10f5748();
  if (iVar4 != 0) {
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01105c0c + 0x1105b9c));
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105c10 + 0x1105bb0));
    System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_01105c14 + 0x1105bcc),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = (char *)(_UNK_01083be4 + 0x1083b68);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083be8 + 0x1083b7c),uVar5,0);
      *pcVar6 = '\x01';
    }
    piVar8 = *(int **)(_UNK_01083bec + 0x1083b94);
    iVar1 = *(int *)(iVar4 + 0x98);
    while( true ) {
      piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar5,0);
      piVar7 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar7 = piVar2, *piVar2 != *piVar8)) break;
      iVar3 = FUN_00efd180((int *)(iVar4 + 0x98),piVar7,iVar1);
      bVar9 = iVar3 == iVar1;
      iVar1 = iVar3;
      if (bVar9) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
  return;
}

