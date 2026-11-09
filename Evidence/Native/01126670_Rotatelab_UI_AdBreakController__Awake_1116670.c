/* IL2CPP: Rotatelab.UI.AdBreakController$$Awake
void Rotatelab_UI_AdBreakController__Awake (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$Awake
   void Rotatelab_UI_AdBreakController__Awake (Rotatelab_UI_AdBreakController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_AdBreakController__Awake_1116670(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01126874 + 0x1126684);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126878 + 0x1126698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112687c + 0x11266a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126880 + 0x11266b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126884 + 0x11266bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126888 + 0x11266c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112688c + 0x11266d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126890 + 0x11266e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126894 + 0x11266ec));
    *pcVar4 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01126898 + 0x1126700));
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_0112689c + 0x1126724);
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0xb4);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,param_1,**(undefined4 **)(_UNK_011268a0 + 0x1126744),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar3,0);
  piVar6 = *(int **)(param_1 + 0x24);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xe0))
              (piVar6,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*piVar6 + 0xe4));
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0xb4);
    uVar3 = thunk_FUN_00f00cdc(*puVar8);
    UnityEngine_Events_UnityAction___ctor_361afc4
              (uVar3,param_1,**(undefined4 **)(_UNK_011268a4 + 0x11267c8),0);
    if (iVar5 != 0) {
      UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar3,0);
      piVar6 = *(int **)(_UNK_011268a8 + 0x11267f8);
      iVar5 = *piVar6;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar6;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x100);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011268ac + 0x112681c));
      System_Action_bool____ctor_17aaff0
                (uVar3,param_1,**(undefined4 **)(_UNK_011268b0 + 0x112683c),0);
      uVar3 = Rotatelab_GameAction_bool___op_Addition_23a2828
                        (uVar7,uVar3,**(undefined4 **)(_UNK_011268b4 + 0x1126854));
      puVar8 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x100);
      *puVar8 = uVar3;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

