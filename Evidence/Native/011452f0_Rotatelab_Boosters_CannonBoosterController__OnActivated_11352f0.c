/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$OnActivated
void Rotatelab_Boosters_CannonBoosterController__OnActivated (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$OnActivated
   void Rotatelab_Boosters_CannonBoosterController__OnActivated
   (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController__OnActivated_11352f0(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_01145500 + 0x1145304);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145504 + 0x1145318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145508 + 0x1145324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114550c + 0x1145330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145510 + 0x114533c));
    *pcVar5 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__OnActivated_1132370(param_1);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01145514 + 0x1145358));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01145518 + 0x1145378));
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar4,param_1,**(undefined4 **)(_UNK_0114551c + 0x1145398),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerPressEventListener__add_OnPointerClick_1110bbc(iVar3,uVar4,0);
  Rotatelab_FX_IDimEffectTarget__DimEverythingExceptStandardVoxels_10fc718(0);
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_CannonRig__SetOffVisual_1134b8c(param_1[4],0);
  iVar6 = param_1[4];
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01145520 + 0x11453f8));
  uVar4 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(iVar3,uVar4,0);
  uVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_CannonRig__SetAmmoCount_1134b40(iVar6,uVar4);
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_CannonRig__SlideIn_1134074(param_1[4],0);
  iVar3 = param_1[0xd];
  if (iVar3 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar3,0);
  }
  uVar4 = Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_1135524(param_1);
  iVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
  param_1[0xd] = iVar3;
  thunk_FUN_00ec5080(param_1 + 0xd,iVar3);
  piVar7 = param_1 + 0xe;
  if (*piVar7 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar7,0);
  }
  uVar4 = Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_113559c(param_1);
  iVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
  param_1[0xe] = iVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar7 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

