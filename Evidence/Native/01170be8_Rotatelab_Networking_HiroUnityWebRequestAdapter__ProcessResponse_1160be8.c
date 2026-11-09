/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$ProcessResponse
System_String_o* Rotatelab_Networking_HiroUnityWebRequestAdapter__ProcessResponse (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, UnityEngine_Networking_UnityWebRequest_o* www, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011712ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$ProcessResponse
   System_String_o* Rotatelab_Networking_HiroUnityWebRequestAdapter__ProcessResponse
   (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this,
   UnityEngine_Networking_UnityWebRequest_o* www, const MethodInfo* method); */

int Rotatelab_Networking_HiroUnityWebRequestAdapter__ProcessResponse_1160be8
              (int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int extraout_r1;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int *piStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar11 = (char *)(_UNK_01171560 + 0x1170c04);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171564 + 0x1170c18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171568 + 0x1170c24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117156c + 0x1170c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171570 + 0x1170c3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171574 + 0x1170c48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171578 + 0x1170c54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117157c + 0x1170c60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171580 + 0x1170c6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171584 + 0x1170c78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171588 + 0x1170c84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117158c + 0x1170c90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171590 + 0x1170c9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171594 + 0x1170ca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171598 + 0x1170cb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117159c + 0x1170cc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011715a0 + 0x1170ccc));
    *pcVar11 = '\x01';
  }
  puStack_54 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  iStack_2c = 0;
  piStack_34 = (int *)0x0;
  uStack_38 = 0;
  piStack_3c = (int *)0x0;
  uStack_48 = 0;
  uStack_5c = 0;
  iStack_30 = param_1;
  thunk_FUN_00ec5080(&iStack_30,param_1);
  iStack_2c = param_2;
  thunk_FUN_00ec5080((uint)&iStack_30 | 4,param_2);
  if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Networking_UnityWebRequest__get_result_39e94f4(iStack_2c,0);
  if (iVar1 == 1) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = 0;
    iVar1 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler_39e89bc(iStack_2c,0);
    if (iVar1 != 0) {
      iVar12 = UnityEngine_Networking_DownloadHandler__get_text_39e6aa0(iVar1,0);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_011715a4 + 0x1170da0),2);
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Networking_UnityWebRequest__get_uri_39e97b8(iStack_2c,0);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar3 != 0) &&
         (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
        uVar5 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar5,0);
      }
      if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[4] = iVar3;
      thunk_FUN_00ec5080(piVar2 + 4,iVar3);
      if ((iVar12 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar12,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar5 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar5,0);
      }
      if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[5] = iVar12;
      thunk_FUN_00ec5080(piVar2 + 5,iVar12);
      Rotatelab_Networking_HiroLogger__InfoFormat_115f700
                (iVar1,**(undefined4 **)(_UNK_011715a8 + 0x1170e7c),piVar2);
    }
    return iVar12;
  }
  if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = UnityEngine_Networking_UnityWebRequest__get_result_39e94f4(iStack_2c,0);
  iVar1 = iStack_2c;
  if (iVar12 == 3) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)0x0;
    iVar1 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler_39e89bc(iStack_2c,0);
    if (iVar1 != 0) {
      piVar2 = (int *)UnityEngine_Networking_DownloadHandler__get_text_39e6aa0(iVar1,0);
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar17 = UnityEngine_Networking_UnityWebRequest__get_responseCode_39e9564(iStack_2c,0);
    iVar1 = iStack_2c;
    iVar12 = (int)((ulonglong)uVar17 >> 0x20);
    if (iVar12 < (int)(uint)((uint)uVar17 < 500)) {
      if ((piVar2 == (int *)0x0) ||
         (uVar17 = Nakama_TinyJson_JsonParser__FromJson_object__14a855c
                             (piVar2,**(undefined4 **)(_UNK_011715ac + 0x1170f18)),
         iVar12 = (int)((ulonglong)uVar17 >> 0x20), iVar1 = (int)uVar17, iVar1 == 0)) {
LAB_011710fc:
        piVar6 = (int *)Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0_1161600
                                  (param_1,iVar12,0xffffffff,0xffffffff,piVar2,0xffffffff,&iStack_30
                                  );
      }
      else {
        puVar15 = *(undefined4 **)(_UNK_011715b0 + 0x1170f40);
        iVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                           (iVar1,**(undefined4 **)(_UNK_011715b4 + 0x1170f4c),&piStack_34,*puVar15)
        ;
        if (iVar12 == 0) {
          uVar5 = **(undefined4 **)(*(int *)(*(int *)(_UNK_011715b8 + 0x1170f98) + 0x48) + 0x5c);
        }
        else {
          if (piStack_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = (**(code **)(*piStack_34 + 0xd8))(piStack_34,*(undefined4 *)(*piStack_34 + 0xdc));
        }
        iVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                           (iVar1,**(undefined4 **)(_UNK_011715bc + 0x1170fb0),&uStack_38,*puVar15);
        uVar8 = uStack_38;
        uVar13 = 0xffffffff;
        piVar14 = piVar2;
        if (iVar12 != 0) {
          iVar12 = *(int *)(_UNK_011715c0 + 0x1170fd4);
          piVar14 = *(int **)(iVar12 + 0x24);
          if (*(int *)(*(int *)(iVar12 + 0x70) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar13 = System_Type__GetTypeFromHandle_2b80928(piVar14 + 4,0);
          if (*(int *)(**(int **)(_UNK_011715c4 + 0x117100c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          piVar6 = (int *)System_Convert__ChangeType_2b1a9f0(uVar8,uVar13,0);
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*piVar6 + 0x20) != *(int *)(*(int *)(iVar12 + 0x24) + 0x20)) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar6,*(int *)(iVar12 + 0x24));
          }
          puVar7 = (undefined4 *)FUN_00ec3940(piVar6);
          uVar13 = *puVar7;
        }
        if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar17 = UnityEngine_Networking_UnityWebRequest__get_responseCode_39e9564(iStack_2c,0);
        uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
        piVar6 = (int *)Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0_1161600
                                  (param_1,uVar8,(int)uVar17,uVar8,uVar5,uVar13,&iStack_30);
        uVar17 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                           (iVar1,**(undefined4 **)(_UNK_011715c8 + 0x11710cc),&piStack_3c,*puVar15)
        ;
        iVar12 = (int)((ulonglong)uVar17 >> 0x20);
        bVar16 = (int)uVar17 != 0;
        if (bVar16) {
          piVar14 = piStack_3c;
        }
        if (bVar16 && piVar14 != (int *)0x0) {
          iVar1 = *piVar14;
          if (iVar1 != *(int *)(*(int *)(_UNK_011715cc + 0x1171144) + 0x48)) {
            iVar12 = **(int **)(_UNK_011715d8 + 0x117115c);
            if (((uint)*(byte *)(iVar12 + 0xb8) <= (uint)*(byte *)(iVar1 + 0xb8)) &&
               (*(int *)(*(int *)(iVar1 + 100) + (uint)*(byte *)(iVar12 + 0xb8) * 4 + -4) == iVar12)
               ) {
              System_Collections_Generic_Dictionary_object__object___GetEnumerator_2069840
                        (&uStack_78,piVar14,**(undefined4 **)(_UNK_011715dc + 0x117118c));
              uStack_58 = uStack_78;
              puStack_54 = puStack_74;
              uStack_50 = uStack_70;
              uStack_4c = uStack_6c;
              uStack_48 = uStack_68;
              uStack_78 = 0;
              puVar15 = *(undefined4 **)(_UNK_011715e0 + 0x11711d0);
              puStack_74 = &uStack_58;
              while (iVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_21e76e4
                                       (&uStack_58,*puVar15), uVar5 = uStack_4c, iVar1 != 0) {
                uVar8 = (undefined4)uStack_48;
                if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                piVar14 = (int *)(**(code **)(*piVar6 + 0xf0))
                                           (piVar6,*(undefined4 *)(*piVar6 + 0xf4));
                if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                iVar1 = *piVar14;
                uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar10[-1] == **(int **)(_UNK_011715e4 + 0x1171224)) {
                      puVar7 = (undefined4 *)(iVar1 + *piVar10 * 8 + 200);
                      goto LAB_0117126c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 2;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_011715e4 + 0x1171224),1)
                ;
LAB_0117126c:
                (*(code *)*puVar7)(piVar14,uVar5,uVar8,puVar7[1]);
              }
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_21e782c
                        (&uStack_58,**(undefined4 **)(_UNK_011715e8 + 0x117129c));
              iVar12 = extraout_r1;
            }
            goto LAB_011710e8;
          }
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = (**(code **)(*piVar6 + 0xf0))(piVar6,*(undefined4 *)(*piVar6 + 0xf4));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011715d0 + 0x1171388));
          uVar8 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011715d4 + 0x1171398));
          FUN_00b8b534(1,uVar5,iVar1,uVar8,piVar14);
        }
        else {
LAB_011710e8:
          if (piVar6 == (int *)0x0) goto LAB_011710fc;
        }
      }
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011715ec + 0x1171128));
      goto LAB_01171130;
    }
    FUN_00b87610(iStack_2c);
    uVar17 = UnityEngine_Networking_UnityWebRequest__get_responseCode_39e9564(iVar1,0);
    iVar1 = (int)uVar17 >> 0x1f;
  }
  else {
    FUN_00b87610(iStack_2c);
    piVar2 = (int *)UnityEngine_Networking_UnityWebRequest__get_error_39e9424(iVar1,0);
    uVar17 = 0xffffffffffffffff;
    iVar1 = -1;
  }
  piVar6 = (int *)Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0_1161600
                            (param_1,(int)((ulonglong)uVar17 >> 0x20),(int)uVar17,iVar1,piVar2,
                             0xffffffff,&iStack_30);
  uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011715f8 + 0x1171340));
LAB_01171130:
  func_0x00ec3920(piVar6,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

