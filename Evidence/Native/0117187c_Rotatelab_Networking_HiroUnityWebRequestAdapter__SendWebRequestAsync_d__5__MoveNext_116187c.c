/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter.<SendWebRequestAsync>d__5$$MoveNext
void Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5__MoveNext (Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01171e3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter.<SendWebRequestAsync>d__5$$MoveNext
   void Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5__MoveNext
   (Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5__MoveNext_116187c
               (uint *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  uint auStack_40 [5];
  uint *puStack_2c;
  
  pcVar7 = (char *)(_UNK_011721d8 + 0x117189c);
  puStack_2c = param_1;
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721dc + 0x11718b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721e0 + 0x11718bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721e4 + 0x11718c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721e8 + 0x11718d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721ec + 0x11718e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721f0 + 0x11718ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721f4 + 0x11718f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721f8 + 0x1171904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011721fc + 0x1171910));
    *pcVar7 = '\x01';
  }
  auStack_40[4] = *param_1;
  uVar12 = param_1[5];
  auStack_40[3] = 0;
  auStack_40[2] = 0;
  auStack_40[1] = 0;
  if (auStack_40[4] != 0) {
    if (param_1[4] == 0) {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(uVar12 + 0xc);
      if (iVar10 != 0) {
        uVar2 = System_String__Format_2a0c264
                          (**(undefined4 **)(_UNK_01172204 + 0x1171a1c),puStack_2c[6],puStack_2c[7],
                           0);
        Rotatelab_Networking_HiroLogger__Info_115f684(iVar10,uVar2);
      }
    }
    else {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(uVar12 + 0xc);
      if (iVar10 != 0) {
        uVar8 = puStack_2c[6];
        uVar13 = puStack_2c[7];
        piVar1 = (int *)System_Text_Encoding__get_UTF8_2a278d0(0);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = (**(code **)(*piVar1 + 0x1d8))
                          (piVar1,puStack_2c[4],*(undefined4 *)(*piVar1 + 0x1dc));
        uVar2 = System_String__Format_2a0c2b4
                          (**(undefined4 **)(_UNK_01172200 + 0x11719b8),uVar8,uVar13,uVar2,0);
        Rotatelab_Networking_HiroLogger__Info_115f684(iVar10,uVar2);
      }
    }
    uVar8 = Rotatelab_Networking_HiroUnityWebRequestAdapter__CreateWebRequest_1160284
                      (uVar12,puStack_2c[6],puStack_2c[7],puStack_2c[8],puStack_2c[4]);
    puStack_2c[0xb] = uVar8;
    thunk_FUN_00ec5080();
    if (auStack_40[4] != 0) {
      if (puStack_2c[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_39e8aa4(puStack_2c[0xb],0);
      puStack_2c[0xc] = uVar8;
      thunk_FUN_00ec5080();
      puStack_2c[0xe] = 0;
      puStack_2c[0xf] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puStack_2c[0x10] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puStack_2c[0x11] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puStack_2c[0x12] = 0;
      goto LAB_01171b34;
    }
  }
  auStack_40[3] = puStack_2c[0x13];
  puStack_2c[0x13] = 0;
  auStack_40[4] = 0xffffffff;
  *puStack_2c = 0xffffffff;
  do {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_321c1ec(auStack_40 + 3,0);
LAB_01171b34:
    if (puStack_2c[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = UnityEngine_AsyncOperation__get_isDone_35fa624(puStack_2c[0xc],0);
    puVar11 = puStack_2c;
    if (iVar10 != 0) {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = Rotatelab_Networking_HiroUnityWebRequestAdapter__ProcessResponse_1160be8
                         (uVar12,puStack_2c[0xb]);
      iVar10 = 0x13;
      goto LAB_01171dac;
    }
    piVar1 = *(int **)(_UNK_01172208 + 0x1171b68);
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar10 = System_Threading_CancellationToken__get_IsCancellationRequested_2bde434(puVar11 + 9,0);
    if (iVar10 != 0) {
      if (puStack_2c[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Networking_UnityWebRequest__Abort_39e7fa8(puStack_2c[0xb],0);
      puVar11 = puStack_2c;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested_2bdf044(puVar11 + 9,0);
    }
    if (0 < (int)puStack_2c[10]) {
      puVar11 = puStack_2c + 0xe;
      if (puStack_2c[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar16 = UnityEngine_Networking_UnityWebRequest__get_uploadedBytes_39e9c10(puStack_2c[0xb],0);
      piVar1 = *(int **)(_UNK_0117220c + 0x1171c14);
      iVar10 = *(int *)(*piVar1 + 0x74);
      if (iVar10 == 0) {
        FUN_00ec3934();
        iVar10 = extraout_r1;
      }
      puVar9 = *(undefined4 **)(_UNK_01172210 + 0x1171c30);
      iVar10 = Rotatelab_Utilities__TryChangeValue_ulong__1663eac
                         (puVar11,iVar10,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar9);
      fVar15 = _UNK_0117202c;
      if (iVar10 == 0) {
        puVar11 = puStack_2c + 0x10;
        if (puStack_2c[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar16 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes_39e9ccc
                           (puStack_2c[0xb],0);
        iVar10 = *(int *)(*piVar1 + 0x74);
        if (iVar10 == 0) {
          FUN_00ec3934();
          iVar10 = extraout_r1_00;
        }
        iVar10 = Rotatelab_Utilities__TryChangeValue_ulong__1663eac
                           (puVar11,iVar10,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),*puVar9);
        if (iVar10 == 0) {
          fVar15 = (float)puStack_2c[0x12];
          fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar3 < _UNK_011720c0) << 0x1f;
          fVar14 = _UNK_011720c0;
          if (SUB41(in_fpscr >> 0x1f,0)) {
            fVar14 = fVar3;
          }
          fVar15 = fVar15 + fVar14;
        }
      }
      puStack_2c[0x12] = (uint)fVar15;
      fVar14 = (float)VectorSignedToFloat(puStack_2c[10],(byte)(in_fpscr >> 0x16) & 3);
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar14) << 0x1f;
      in_fpscr = uVar8 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
      if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        if (puStack_2c[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Networking_UnityWebRequest__Abort_39e7fa8(puStack_2c[0xb],0);
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01172214 + 0x1172088));
        uVar2 = thunk_FUN_00f00cdc();
        System_TimeoutException___ctor_2b8ac94(uVar2,0);
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01172218 + 0x11720a4));
        func_0x00ec3920(uVar2,uVar5);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
    }
    if (*(int *)(**(int **)(_UNK_0117221c + 0x1171d00) + 0x74) == 0) {
      FUN_00ec3934();
    }
    auStack_40[2] = Cysharp_Threading_Tasks_UniTask__Yield_3216554(0);
    auStack_40[3] = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_321c1d4(auStack_40 + 2,0);
    iVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_321c1e4
                       (auStack_40 + 3,0);
  } while (iVar10 != 0);
  puVar9 = *(undefined4 **)(_UNK_01172220 + 0x1171d54);
  auStack_40[4] = 0;
  *puStack_2c = 0;
  uVar2 = *puVar9;
  puStack_2c[0x13] = auStack_40[3];
  func_0x011754d4(puStack_2c + 1,auStack_40 + 3,puStack_2c,uVar2);
  iVar10 = 0x12;
  uVar12 = 0;
LAB_01171dac:
  if ((0x7fffffff < auStack_40[4]) && (piVar1 = (int *)puStack_2c[0xb], piVar1 != (int *)0x0)) {
    iVar4 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01172224 + 0x1171ddc)) {
          puVar9 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
          goto LAB_01171e24;
        }
        uVar8 = uVar8 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_01172224 + 0x1171ddc),0);
LAB_01171e24:
    (*(code *)*puVar9)(piVar1,puVar9[1]);
  }
  if (iVar10 == 0x13) {
    *puStack_2c = 0xfffffffe;
    puStack_2c[0xb] = 0;
    thunk_FUN_00ec5080(puStack_2c + 0xb,0);
    puStack_2c[0xc] = 0;
    thunk_FUN_00ec5080(puStack_2c + 0xc,0);
    piVar1 = (int *)puStack_2c[1];
    if (piVar1 == (int *)0x0) {
      puStack_2c[3] = uVar12;
      thunk_FUN_00ec5080(puStack_2c + 3,uVar12);
    }
    else {
      iVar10 = *(int *)(**(int **)(_UNK_01172230 + 0x1171f68) + 0x10);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
      }
      iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 4);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768(iVar10);
      }
      iVar4 = *piVar1;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar10) {
            puVar9 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd0);
            goto LAB_0117203c;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined4 *)FUN_00efdb38(piVar1,iVar10,2);
LAB_0117203c:
      (*(code *)*puVar9)(piVar1,uVar12,puVar9[1]);
    }
  }
  else if (iVar10 == 0) {
    uVar12 = auStack_40[auStack_40[1] + -1];
    *puStack_2c = 0xfffffffe;
    puStack_2c[0xb] = 0;
    thunk_FUN_00ec5080(puStack_2c + 0xb,0);
    puStack_2c[0xc] = 0;
    thunk_FUN_00ec5080(puStack_2c + 0xc,0);
    puVar11 = puStack_2c;
    iVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0117222c + 0x1171ea0));
    piVar1 = (int *)puVar11[1];
    if (piVar1 == (int *)0x0) {
      puVar11 = puVar11 + 2;
      *puVar11 = uVar12;
      thunk_FUN_00ec5080(puVar11,uVar12);
    }
    else {
      iVar10 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
      }
      iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 4);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768(iVar10);
      }
      iVar4 = *piVar1;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar10) {
            puVar9 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd8);
            goto LAB_0117200c;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined4 *)FUN_00efdb38(piVar1,iVar10,3);
LAB_0117200c:
      (*(code *)*puVar9)(piVar1,uVar12,puVar9[1]);
    }
  }
  return;
}

