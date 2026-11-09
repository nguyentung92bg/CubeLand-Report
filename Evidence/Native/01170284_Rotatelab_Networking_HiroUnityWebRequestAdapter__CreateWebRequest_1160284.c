/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$CreateWebRequest
UnityEngine_Networking_UnityWebRequest_o* Rotatelab_Networking_HiroUnityWebRequestAdapter__CreateWebRequest (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method, System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers, System_Byte_array* body, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011707c8) */
/* WARNING: Removing unreachable block (ram,0x011707d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$CreateWebRequest
   UnityEngine_Networking_UnityWebRequest_o*
   Rotatelab_Networking_HiroUnityWebRequestAdapter__CreateWebRequest
   (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method,
   System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers,
   System_Byte_array* body, const MethodInfo* method); */

int Rotatelab_Networking_HiroUnityWebRequestAdapter__CreateWebRequest_1160284
              (int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  pcVar8 = (char *)(_UNK_01170868 + 0x11702a4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117086c + 0x11702bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170870 + 0x11702c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170874 + 0x11702d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170878 + 0x11702e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117087c + 0x11702ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170880 + 0x11702f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170884 + 0x1170304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170888 + 0x1170310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117088c + 0x117031c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170890 + 0x1170328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170894 + 0x1170334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170898 + 0x1170340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117089c + 0x117034c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708a0 + 0x1170358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708a4 + 0x1170364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708a8 + 0x1170370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708ac + 0x117037c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708b0 + 0x1170388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011708b4 + 0x1170394));
    *pcVar8 = '\x01';
  }
  piVar9 = *(int **)(_UNK_011708b8 + 0x11703ac);
  piStack_28 = (int *)0x0;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                    (param_2,**(undefined4 **)(_UNK_011708bc + 0x11703d0),0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                      (param_2,**(undefined4 **)(_UNK_011708c0 + 0x1170404),0);
    if (iVar2 == 0) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                        (param_2,**(undefined4 **)(_UNK_011708d8 + 0x1170534),0);
      if (iVar2 == 0) {
        iVar2 = UnityEngine_Networking_UnityWebRequest__Get_39eac14(param_3,0);
      }
      else {
        iVar2 = UnityEngine_Networking_UnityWebRequest__Delete_39eacd8(param_3,0);
      }
      goto LAB_01170564;
    }
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011708c4 + 0x1170424));
  UnityEngine_Networking_UnityWebRequest___ctor_39e8384(iVar2,param_3,param_2,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011708c8 + 0x1170448));
  UnityEngine_Networking_DownloadHandlerBuffer___ctor_39e74d8(uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Networking_UnityWebRequest__set_downloadHandler_39e85d4(iVar2,uVar3,0);
  if (param_5 != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 8);
  }
  if ((param_5 != 0 && uVar4 != 0) && (0x400 < *(int *)(param_5 + 0xc))) {
    param_5 = Rotatelab_Networking_HiroUnityWebRequestAdapter__CompressDataWithGZip_11608fc(param_5)
    ;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4
              (iVar2,**(undefined4 **)(_UNK_011708d0 + 0x1170504),
               **(undefined4 **)(_UNK_011708cc + 0x11704f8),0);
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011708d4 + 0x1170490));
  UnityEngine_Networking_UploadHandlerRaw___ctor_39eb058(uVar3,param_5,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Networking_UnityWebRequest__set_uploadHandler_39e86b4(iVar2,uVar3,0);
LAB_01170564:
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4
            (iVar2,**(undefined4 **)(_UNK_011708e0 + 0x117058c),
             **(undefined4 **)(_UNK_011708dc + 0x1170580),0);
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *param_4;
  uVar4 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_011708e4 + 0x11705b0)) {
        puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
        goto LAB_011705f8;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined4 *)FUN_00efdb38(param_4,**(int **)(_UNK_011708e4 + 0x11705b0),0);
LAB_011705f8:
  piStack_28 = (int *)(*(code *)*puVar6)(param_4,puVar6[1]);
  ppiStack_2c = &piStack_28;
  uStack_30 = 0;
  piVar9 = *(int **)(_UNK_011708e8 + 0x117062c);
  piVar10 = *(int **)(_UNK_011708ec + 0x1170634);
  do {
    piVar1 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *piStack_28;
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar6 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
          goto LAB_01170690;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar9,0);
LAB_01170690:
    iVar5 = (*(code *)*puVar6)(piVar1,puVar6[1]);
    piVar1 = piStack_28;
    if (iVar5 == 0) {
      if (piStack_28 == (int *)0x0) goto LAB_011707c0;
      iVar5 = *piStack_28;
      uVar4 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar4 == 0) goto LAB_01170794;
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *piStack_28;
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar6 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
          goto LAB_01170708;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar10,0);
LAB_01170708:
    (*(code *)*puVar6)(&uStack_38,piVar1,puVar6[1]);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4(iVar2,uStack_38,uStack_34,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 2;
    if (uVar4 == 0) break;
    if (piVar9[-1] == **(int **)(_UNK_011708f0 + 0x1170768)) {
      puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
      goto LAB_011707b0;
    }
  }
LAB_01170794:
  puVar6 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_011708f0 + 0x1170768),0);
LAB_011707b0:
  (*(code *)*puVar6)(piVar1,puVar6[1]);
LAB_011707c0:
  if (*(char *)(param_1 + 9) != '\0') {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4
              (iVar2,**(undefined4 **)(_UNK_011708f8 + 0x1170810),
               **(undefined4 **)(_UNK_011708f4 + 0x1170804),0);
  }
  return iVar2;
}

