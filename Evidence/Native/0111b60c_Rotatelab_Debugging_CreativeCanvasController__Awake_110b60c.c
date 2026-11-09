/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Awake
void Rotatelab_Debugging_CreativeCanvasController__Awake (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Awake
   void Rotatelab_Debugging_CreativeCanvasController__Awake
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__Awake_110b60c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_0111b9c8 + 0x111b624);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9cc + 0x111b638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9d0 + 0x111b644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9d4 + 0x111b650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9d8 + 0x111b65c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9dc + 0x111b668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9e0 + 0x111b674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9e4 + 0x111b680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9e8 + 0x111b68c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9ec + 0x111b698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9f0 + 0x111b6a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9f4 + 0x111b6b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9f8 + 0x111b6bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b9fc + 0x111b6c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ba00 + 0x111b6d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ba04 + 0x111b6e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ba08 + 0x111b6ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ba0c + 0x111b6f8));
    *pcVar7 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0111ba10 + 0x111b70c));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_0111ba14 + 0x111b730);
  iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0x118);
  uVar3 = thunk_FUN_00f00cdc(*puVar11);
  UnityEngine_Events_UnityAction_object____ctor_1c5feb4
            (uVar3,param_1,**(undefined4 **)(_UNK_0111ba18 + 0x111b750),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar9 = *(undefined4 **)(_UNK_0111ba1c + 0x111b778);
  UnityEngine_Events_UnityEvent_object___AddListener_1c62414(iVar8,uVar3,*puVar9);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
  uVar3 = thunk_FUN_00f00cdc(*puVar11);
  UnityEngine_Events_UnityAction_object____ctor_1c5feb4
            (uVar3,param_1,**(undefined4 **)(_UNK_0111ba20 + 0x111b7b0),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_object___AddListener_1c62414(iVar8,uVar3,*puVar9);
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0xa0) + 0xd8);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111ba24 + 0x111b7f0));
  UnityEngine_Events_UnityAction_int____ctor_1c5fd4c
            (uVar3,param_1,**(undefined4 **)(_UNK_0111ba28 + 0x111b810),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_int___AddListener_1c619e4
            (iVar8,uVar3,**(undefined4 **)(_UNK_0111ba2c + 0x111b834));
  if (*(int *)(param_1 + 0xb8) != 0) {
    fVar4 = (float)Rotatelab_UI_CreativeSlider__GetValue_110ae54(*(int *)(param_1 + 0xb8));
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111ba30 + 0x111b868));
    Rotatelab_Save_SavedBool___ctor_107ed80
              (iVar8,**(undefined4 **)(_UNK_0111ba34 + 0x111b890),0.5 <= fVar4,0);
    piVar10 = (int *)(param_1 + 0x6c);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
    iVar8 = *(int *)(param_1 + 0xb8);
    if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = Rotatelab_Save_SavedValue_bool___get_Value_1a8af54
                      (*piVar10,**(undefined4 **)(_UNK_0111ba38 + 0x111b8d0));
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111ba3c + 0x111b8e8));
    System_Action_float____ctor_1f12930
              (uVar6,param_1,**(undefined4 **)(_UNK_0111ba40 + 0x111b904),0);
    uVar3 = _UNK_0111b9c4;
    if (iVar5 != 0) {
      uVar3 = 0x3f800000;
    }
    if (iVar8 != 0) {
      Rotatelab_UI_CreativeSlider__Bind_110ba54(iVar8,uVar3,uVar6);
      piVar10 = *(int **)(_UNK_0111ba44 + 0x111b944);
      iVar8 = *piVar10;
      if (*(int *)(iVar8 + 0x74) == 0) {
        FUN_00ec3934();
        iVar8 = *piVar10;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x124);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111ba48 + 0x111b968));
      System_Action_object____ctor_1f11414
                (uVar3,param_1,**(undefined4 **)(_UNK_0111ba4c + 0x111b988),0);
      uVar3 = Rotatelab_GameAction_object___op_Addition_23a2f60
                        (uVar6,uVar3,**(undefined4 **)(_UNK_0111ba50 + 0x111b9a0));
      puVar11 = (undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x124);
      *puVar11 = uVar3;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar11 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar11 & 0x1ffff) >> 0xc);
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

