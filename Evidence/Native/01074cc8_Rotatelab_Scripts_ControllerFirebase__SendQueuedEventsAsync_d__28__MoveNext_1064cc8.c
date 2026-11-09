/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SendQueuedEventsAsync>d__28$$MoveNext
void Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_d__28__MoveNext (Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_d__28_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01075218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SendQueuedEventsAsync>d__28$$MoveNext
   void Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_d__28__MoveNext
   (Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_d__28_o __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_d__28__MoveNext_1064cc8
               (uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piStack_68;
  uint *puStack_64;
  char *pcStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_4c;
  char cStack_45;
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar4 = (char *)(_UNK_010755ac + 0x1074ce0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755b0 + 0x1074cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755b4 + 0x1074d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755b8 + 0x1074d0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755bc + 0x1074d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755c0 + 0x1074d24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755c4 + 0x1074d30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755c8 + 0x1074d3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755cc + 0x1074d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010755d0 + 0x1074d54));
    *pcVar4 = '\x01';
  }
  uStack_28 = *param_1;
  puVar5 = param_1 + 2;
  puVar10 = param_1 + 4;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  cStack_45 = '\0';
  uStack_4c = 0;
  if (uStack_28 == 0) {
    piVar13 = (int *)*puVar5;
    uVar11 = param_1[3];
    *param_1 = 0xffffffff;
    *puVar5 = 0;
    param_1[3] = 0;
    uStack_28 = 0xffffffff;
    piStack_30 = piVar13;
    uStack_2c = uVar11;
LAB_01074fe0:
    pcVar4 = (char *)(_UNK_010755fc + 0x1074fec);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01075600 + 0x1075000));
      *pcVar4 = '\x01';
    }
    if (piVar13 != (int *)0x0) {
      iVar2 = *piVar13;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01075604 + 0x1075020)) {
            puVar12 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
            goto LAB_01075068;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar12 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01075604 + 0x1075020),2);
LAB_01075068:
      (*(code *)*puVar12)(piVar13,(int)(short)uVar11,puVar12[1]);
    }
    if (*(int *)(**(int **)(_UNK_01075608 + 0x1075088) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_3217d18(&piStack_68,0,0);
    uStack_3c = (uint)puStack_64;
    piStack_40 = piStack_68;
    Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_321c50c
              (&piStack_68,&piStack_40,0);
    uStack_34 = (uint)puStack_64;
    piStack_38 = piStack_68;
    iVar2 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_321c538
                      (&piStack_38,0);
    if (iVar2 == 0) {
      *puVar10 = (uint)piStack_38;
      param_1[5] = uStack_34;
      uStack_28 = 1;
      *param_1 = 1;
      thunk_FUN_00ec5080(param_1 + 5,0);
      func_0x0108042c(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_0107560c + 0x10753c4));
      return;
    }
  }
  else {
    if (uStack_28 != 1) {
      piVar13 = *(int **)(_UNK_010755d4 + 0x1074e04);
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar13;
      }
      puVar12 = *(undefined4 **)(iVar2 + 0x5c);
      iVar9 = puVar12[6];
      if (iVar9 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar12 = *(undefined4 **)(*piVar13 + 0x5c);
        }
        uVar7 = *puVar12;
        iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010755d8 + 0x1074e50));
        System_Func_bool____ctor_23938dc(iVar9,uVar7,**(undefined4 **)(_UNK_010755dc + 0x1074e64),0)
        ;
        piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 0x18);
        *piVar13 = iVar9;
        thunk_FUN_00ec5080(piVar13,iVar9);
      }
      piVar6 = *(int **)(_UNK_010755e0 + 0x1074e94);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_68,iVar9,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_68,0);
      puVar1 = puStack_64;
      piVar13 = piStack_68;
      pcVar4 = (char *)(_UNK_010755e4 + 0x1074ef0);
      uStack_2c = (uint)puStack_64;
      piStack_30 = piStack_68;
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010755e8 + 0x1074f10));
        *pcVar4 = '\x01';
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar4 = (char *)(_UNK_010755ec + 0x1074f38);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010755f0 + 0x1074f4c));
        *pcVar4 = '\x01';
      }
      uVar11 = (uint)(short)puVar1;
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        iVar2 = *piVar13;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_010755f4 + 0x1074f70)) {
              puVar12 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_01074fc0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar12 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_010755f4 + 0x1074f70),0);
LAB_01074fc0:
        iVar2 = (*(code *)*puVar12)(piVar13,uVar11,puVar12[1]);
        if (iVar2 == 0) {
          *puVar5 = (uint)piVar13;
          param_1[3] = (uint)puVar1;
          *param_1 = 0;
          uStack_28 = 0;
          thunk_FUN_00ec5080(puVar5,0);
          func_0x0108030c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_010755f8 + 0x1075400));
          return;
        }
      }
      goto LAB_01074fe0;
    }
    piStack_38 = (int *)*puVar10;
    uStack_34 = param_1[5];
    *param_1 = 0xffffffff;
    *puVar10 = 0;
    param_1[5] = 0;
    uStack_28 = 0xffffffff;
  }
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_321c614(&piStack_38,0);
  piVar13 = *(int **)(_UNK_01075610 + 0x1075104);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar13;
  }
  puStack_5c = &uStack_44;
  puStack_64 = &uStack_28;
  cStack_45 = '\0';
  uStack_44 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
  pcStack_60 = &cStack_45;
  piStack_68 = (int *)0x0;
  System_Threading_Monitor__Enter_2bdfb90(uStack_44,pcStack_60,0);
  iVar2 = *piVar13;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar13;
  }
  iVar2 = System_IO_File__Exists_2b27c30(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8),0);
  if (iVar2 == 0) {
    iVar9 = 9;
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar13;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar13;
    }
    iVar2 = System_IO_File__ReadAllLines_2b2f154(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8),0);
    iVar9 = 10;
    System_IO_File__Delete_2b2dfb4(*(undefined4 *)(*(int *)(*piVar13 + 0x5c) + 8),0);
  }
  if ((0x7fffffff < uStack_28) && (*pcStack_60 != '\0')) {
    System_Threading_Monitor__Exit_2be3444(*puStack_5c,0);
  }
  if (iVar9 != 10) {
    if (iVar9 == 9) goto LAB_0107537c;
    if (iVar9 != 0) {
      return;
    }
  }
  uVar11 = 0;
  piVar6 = *(int **)(_UNK_01075614 + 0x107524c);
  puVar12 = *(undefined4 **)(_UNK_01075618 + 0x1075254);
  while( true ) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar11) break;
    if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0x10 + uVar11 * 4);
    iVar9 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar7,0);
    if (iVar9 == 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar9 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__14a6fd4(uVar7,*puVar12);
      if (iVar9 != 0) {
        uVar8 = *(undefined4 *)(iVar9 + 8);
        uVar7 = Rotatelab_Scripts_ControllerFirebase_QueuedEvent__get_Parameters_1061784();
        if (*(int *)(*piVar13 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Scripts_ControllerFirebase__LogEvent_1060eac(uVar8,uVar7);
      }
    }
    uVar11 = uVar11 + 1;
  }
LAB_0107537c:
  *param_1 = 0xfffffffe;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

