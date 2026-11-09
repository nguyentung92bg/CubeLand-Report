/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleDebugUI$$Awake
void Rotatelab_Ads_Debugging_AdModuleDebugUI__Awake (Rotatelab_Ads_Debugging_AdModuleDebugUI_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleDebugUI$$Awake
   void Rotatelab_Ads_Debugging_AdModuleDebugUI__Awake (Rotatelab_Ads_Debugging_AdModuleDebugUI_o*
   __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleDebugUI__Awake_10f9dac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_01109ecc + 0x1109dc0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109ed0 + 0x1109dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109ed4 + 0x1109de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109ed8 + 0x1109dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109edc + 0x1109df8));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01109ee0 + 0x1109e0c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0xd) == '\0') {
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (*(int *)(**(int **)(_UNK_01109ee4 + 0x1109eac) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar5 = (char *)(_UNK_03619a18 + 0x36199d0);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619a1c + 0x36199e4),0);
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_03619a20 + 0x36199f8) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar5 = (char *)(_UNK_03619948 + 0x36198a0);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361994c + 0x36198b4));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619950 + 0x36198c0));
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_03619954 + 0x36198d4) + 0x1c) == 0) {
      thunk_FUN_00efd7c4();
    }
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(**(int **)(_UNK_03619958 + 0x36198fc) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361995c + 0x3619918);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619960 + 0x3619928);
      *(code **)(_UNK_03619964 + 0x3619938) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03619944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,0);
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xb4);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01109ee8 + 0x1109e48));
    UnityEngine_Events_UnityAction___ctor_361afc4
              (uVar2,0,**(undefined4 **)(_UNK_01109eec + 0x1109e68),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar2,uVar2,0);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
        *pcVar5 = '\x01';
      }
      iVar7 = *(int *)(iVar1 + 0xc);
      if (iVar7 != 0) {
        iVar8 = *(int *)(iVar7 + 8);
        uVar6 = *(uint *)(iVar7 + 0xc);
        piVar4 = *(int **)(_UNK_0362a154 + 0x362a0f4);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        if (iVar8 != 0) {
          if (uVar6 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar6 + 1;
            puVar3 = (undefined4 *)(iVar8 + uVar6 * 4 + 0x10);
            *puVar3 = uVar2;
            thunk_FUN_00ec5080(puVar3,uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar7,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38)
                      );
          }
          *(undefined1 *)(iVar1 + 0x14) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

