/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass53_0.<<OnAdRevenuePaidMainThread>b__0>d$$MoveNext
void Rotatelab_CustomRotateEventsController___c__DisplayClass53_0___OnAdRevenuePaidMainThread_b__0_d__MoveNext (Rotatelab_CustomRotateEventsController___c__DisplayClass53_0___OnAdRevenuePaidMainThread_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CustomRotateEventsController.<>c__DisplayClass53_0.<<OnAdRevenuePaidMainThread>b__0>d$$MoveNext
   void 
   Rotatelab_CustomRotateEventsController___c__DisplayClass53_0___OnAdRevenuePaidMainThread_b__0_d__MoveNext
   (Rotatelab_CustomRotateEventsController___c__DisplayClass53_0___OnAdRevenuePaidMainThread_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController___c__DisplayClass53_0___OnAdRevenuePaidMainThread_b__0_d__MoveNext_fd761c
               (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_31 [5];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_00fe7acc + 0xfe7634);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ad0 + 0xfe7648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ad4 + 0xfe7654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ad8 + 0xfe7660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7adc + 0xfe766c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ae0 + 0xfe7678));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ae4 + 0xfe7684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7ae8 + 0xfe7690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7aec + 0xfe769c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7af0 + 0xfe76a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7af4 + 0xfe76b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7af8 + 0xfe76c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7afc + 0xfe76cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7b00 + 0xfe76d8));
    *pcVar6 = '\x01';
  }
  iVar8 = param_1[3];
  iStack_1c = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_1c = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe7b04 + 0xfe7710));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar1 + 0x24);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe7b08 + 0xfe7734));
    System_Collections_Generic_Dictionary_object__object____ctor_20688f4
              (iVar1,**(undefined4 **)(_UNK_00fe7b0c + 0xfe7748));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_28 = *(undefined8 *)(iVar8 + 0x20);
    if (*(int *)(**(int **)(_UNK_00fe7b10 + 0xfe7778) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    uVar2 = System_Double__ToString_2b51d18(&uStack_28,uVar2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar7 = *(undefined4 **)(_UNK_00fe7b14 + 0xfe77c4);
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fe7b18 + 0xfe77d0),uVar2,*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fe7b20 + 0xfe7804),
               **(undefined4 **)(_UNK_00fe7b1c + 0xfe77f8),*puVar7);
    if (*(int *)(**(int **)(_UNK_00fe7b24 + 0xfe7818) + 0x74) == 0) {
      FUN_00ec3934();
    }
    auStack_31[0] = UnityEngine_Application__get_isEditor_35a9d10(0);
    uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fe7b28 + 0xfe783c) + 0x14),auStack_31);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fe7b2c + 0xfe786c),uVar2,*puVar7);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = Hiro_SatoriSystem__LogEventAsync_296b910
                      (iVar9,**(undefined4 **)(_UNK_00fe7b34 + 0xfe789c),iVar1,
                       **(undefined4 **)(_UNK_00fe7b30 + 0xfe7890),0,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_1c = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar8,0);
    iVar8 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_1c,0);
    if (iVar8 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_1c;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x00ff4808(param_1 + 1,&iStack_1c,param_1,**(undefined4 **)(_UNK_00fe7b38 + 0xfe7910));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_1c,0);
  iVar8 = _UNK_00fe7b3c;
  *param_1 = -2;
  if (*(char *)(iVar8 + 0xfe7958) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe7b40 + 0xfe796c));
    *(char *)(iVar8 + 0xfe7958) = '\x01';
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    iVar8 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00fe7b44 + 0xfe7990)) {
          puVar7 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xd0);
          goto LAB_00fe79d8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_00fe7b44 + 0xfe7990),2);
LAB_00fe79d8:
    (*(code *)*puVar7)(piVar5,puVar7[1]);
  }
  return;
}

