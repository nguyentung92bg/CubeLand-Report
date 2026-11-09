/* IL2CPP: Rotatelab.CustomRotateEventsController$$CheckAndReport
void Rotatelab_CustomRotateEventsController__CheckAndReport (Rotatelab_CustomRotateEventsController_o* __this, System_Collections_Generic_Dictionary_string__int__o* reportingThreshold, int64_t count, System_String_o* eventPrefix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$CheckAndReport
   void Rotatelab_CustomRotateEventsController__CheckAndReport
   (Rotatelab_CustomRotateEventsController_o* __this,
   System_Collections_Generic_Dictionary_string__int__o* reportingThreshold, int64_t count,
   System_String_o* eventPrefix, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__CheckAndReport_fce038
               (undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_00fde4d0 + 0xfde058);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4d4 + 0xfde06c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4d8 + 0xfde078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4dc + 0xfde084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4e0 + 0xfde090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4e4 + 0xfde09c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4e8 + 0xfde0a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4ec + 0xfde0b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4f0 + 0xfde0c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4f4 + 0xfde0cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4f8 + 0xfde0d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde4fc + 0xfde0e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde500 + 0xfde0f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde504 + 0xfde0fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde508 + 0xfde108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde50c + 0xfde114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde510 + 0xfde120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde514 + 0xfde12c));
    *pcVar7 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  uStack_58 = 0;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fde518 + 0xfde150));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar2,**(undefined4 **)(_UNK_00fde51c + 0xfde17c));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_object__int___GetEnumerator_205addc
            (&uStack_70,param_2,**(undefined4 **)(_UNK_00fde520 + 0xfde1a4));
  uStack_40 = uStack_70;
  uStack_3c = puStack_6c;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_70 = 0;
  puStack_6c = &uStack_40;
  while( true ) {
    do {
      iVar3 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext_21e5268
                        (&uStack_40,**(undefined4 **)(_UNK_00fde534 + 0xfde1dc));
      uVar1 = uStack_34;
      if (iVar3 == 0) {
        System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_21e53b0
                  (&uStack_40,**(undefined4 **)(_UNK_00fde538 + 0xfde36c));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___GetEnumerator_267e7a4
                  (&uStack_58,iVar2,**(undefined4 **)(_UNK_00fde540 + 0xfde398));
        uStack_70 = 0;
        puVar5 = *(undefined4 **)(_UNK_00fde544 + 0xfde3b8);
        puVar11 = *(undefined4 **)(_UNK_00fde548 + 0xfde3c0);
        puStack_6c = &uStack_58;
        while( true ) {
          iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                            (&uStack_58,*puVar5);
          if (iVar2 == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                      (&uStack_58,**(undefined4 **)(_UNK_00fde54c + 0xfde400));
            return;
          }
          if (param_2 == 0) break;
          System_Collections_Generic_Dictionary_object__int___Remove_205c1b0
                    (param_2,uStack_4c,*puVar11);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    } while ((int)uStack_30 != param_3 || param_4 != (int)uStack_30 >> 0x1f);
    iStack_44 = (int)uStack_30;
    uVar4 = System_Int32__ToString_2b6b9ec(&iStack_44,0);
    uVar4 = System_String__Concat_2a0b574
                      (param_5,uVar4,**(undefined4 **)(_UNK_00fde524 + 0xfde22c),0);
    iVar10 = **(int **)(_UNK_00fde528 + 0xfde248);
    iVar3 = *(int *)(iVar10 + 0x1c);
    if (iVar3 == 0) {
      FUN_00efd7c4(iVar10);
      iVar3 = *(int *)(iVar10 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    uVar8 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_00fde52c + 0xfde2a8) + 0x74) == 0) {
      FUN_00ec3934(**(int **)(_UNK_00fde52c + 0xfde2a8));
    }
    uVar4 = Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar4,uVar8,0);
    Rotatelab_CustomRotateEventsController__ReportToAdjust_fd571c(uVar4,uVar1,param_3,param_4);
    if (iVar2 == 0) break;
    iVar3 = *(int *)(iVar2 + 8);
    uVar9 = *(uint *)(iVar2 + 0xc);
    piVar6 = *(int **)(_UNK_00fde530 + 0xfde310);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
      puVar5 = (undefined4 *)(iVar3 + uVar9 * 4 + 0x10);
      *puVar5 = uVar1;
      thunk_FUN_00ec5080(puVar5,uVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

